#include<iostream>
using namespace std;
#define MAX 1000001

int prime[MAX] = {0}, num[MAX] = {0};

bool check(int x) {
    int mul = 1;
    while(mul <= x) mul *= 10;
    mul /= 10;
    int t = x;
    do{
        if (t % 10 == 0) return false;
        t = t / 10 + t % 10 * mul;
        if (num[t]) return false;
    }while(t != x);
    return true;
}
int main() {
    int i, j, ans = 0, m = 0;
    for (i = 2; i <= MAX; i++) {
        if(!prime[i]) prime[++m] = i;
        for (j = 1; j <= m && prime[j] * i <= MAX; j++) {
            num[i * prime[j]] = 1;
        }
    }
    for (i = 1; i <= m; i++) {
        if (check(prime[i])) {
            ans++;
            cout<<ans<<endl;
        }
    }
    return 0;
}
