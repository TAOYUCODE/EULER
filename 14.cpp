#include<iostream>
using namespace std;

int main() {
    long long int i, t, x, ans = 0, res = 0;
    for (i = 700000; i < 1000000; i++) {
        t = 0;
        x = i;
        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
                t++;
            } else {
                x = 3 * x + 1;
                t++;
            }
        }
        if (t > ans) {
            ans = t;
            res = i;
        }
    }
    cout<<res;
    return 0;
}
