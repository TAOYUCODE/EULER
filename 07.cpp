#include<iostream>
using namespace std;
#define MAX 2000005

int prime[MAX];

int main() {
    int i, j, x = 0;
    for (i = 2; i <= MAX; i++) {
        if (!prime[i]) prime[++x] = i;
        for (j = 1; j <= x && i * prime[j] <= MAX; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    cout<<prime[10001];
    return 0;
}
