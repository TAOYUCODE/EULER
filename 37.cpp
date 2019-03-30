#include<iostream>
using namespace std;
#define MAX 2000000
#include<cmath>
int prime[MAX] = {0}, num[MAX] = {0};

bool is_prime(int n) {
    int x = n, h;
    while(x) {
        if (num[x] != 0) return false;
        x /= 10;
    }
    h = (int)pow(10, floor(log10(n)));
    x = n;
    while(x) {
        if (num[x] != 0) return false;
        x -= (x / h) * h;
        h /=10;
    }
    return true;
}

int main() {
    int i, j, x = 0;
    for (i = 2; i <= MAX; i++) {
        if(!prime[i]) prime[++x] = i;
        for (j = 1; j <= x && prime[j] * i <= MAX; j++) {
            num[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    num[1] = num[1] = 1;
    int t = 1, sum = 0;
    for (i = 10; i <= MAX; i++) {
        if (num[i] == 0 && is_prime(i)) {
            sum += i;
            cout<<t<<' '<<i<<endl;
            t++;
        }
    }
    cout<<endl;
    cout<<sum<<endl;
    return 0;
}
