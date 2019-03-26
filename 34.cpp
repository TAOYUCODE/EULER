#include<iostream>
using namespace std;

int jie(int a) {
    int m = 1;
    while(a >= 1) {
        m *= a;
        a--;
    }
    return m;
}

int main() {
    int i, x, t, sum = 0, ans = 0;
    for (i = 3; i < 2550000; i++) {
        x = i;
        sum = 0;
        while (x) {
            t = x % 10;
            x /= 10;
            sum += jie(t);
        }
        if (sum == i) ans += sum;
    }
    cout<<ans;
    return 0;
}
