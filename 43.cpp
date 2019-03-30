
#include<iostream>
#include<algorithm>
using namespace std;

long long int is(int *a) {
    if (a[0] == 0) return 0;
    int b[7] = {2, 3, 5, 7, 11, 13, 17}, j = 0;
    long long int num = a[0], ret = a[0];
    for (int i = 1; i < 10; i++) {
        ret = ret * 10 + a[i];
        num = num * 10 + a[i];
        if (i < 3) continue;
        num -= a[i - 3] * 1000;
        if (num % b[j++]) return 0;
    }
    return ret;
}

int main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    long long int sum = 0, t;
    do {
        sum += is(a);
    } while (next_permutation(a, a + 10));
    cout<<sum;
    return 0;
} 
