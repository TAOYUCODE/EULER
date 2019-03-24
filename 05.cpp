#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main() {
    int i, ans = 1;
    for (i = 1; i <= 20; i++) {
        ans *= i / gcd(i, ans);
    }
    cout<<ans;
}
