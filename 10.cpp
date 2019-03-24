#include<iostream>
using namespace std;
#define MAX 2000005

int prime[MAX] = {0};

int main() {
    prime[0] = prime[1] = 1;
    long long int i, j, x = 0, ans = 0;
    for (i = 2; i * i < MAX; i++) {
        if (!prime[i]) {
            for (j = i * i; j <= MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (i = 1; i <= MAX; i++) {
        if(!prime[i]) prime[++x] = i;
    }
    for (i = 1; prime[i] < 2000000; i++) {
        ans += prime[i];
    }
    cout<<ans;
}
