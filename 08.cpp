#include<iostream>
using namespace std;
#include"008.h"
int main() {
    long long int i, j, ans = 1, zero = 0, max = 0; 
    for (i = 0; i < 1000; i++) {
        if (a[i] != '0') {
            ans *= (a[i] - '0');
        } else {
            zero++;
        }
        if (i >= 13) {
            if (a[i - 13] != '0') {
                ans /= (a[i - 13] - '0');
            } else {
                zero--;
            }
        }
        if (zero == 0 && ans > max) max = ans;
    }
    cout<<max;
    return 0;
}
