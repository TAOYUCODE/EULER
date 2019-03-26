#include<iostream>
using namespace std;

int main() {
    long long int ans = 1, i, j, r, l, d, f;
    for (i = 3; i <= 1001; i += 2) {
        r = i * i;
        l = r - i - 1;
        d = l - i - 1;
        f = d - i - 1;
        ans += r + l + d + f;
    }
    cout<<ans;
    return 0;
}
