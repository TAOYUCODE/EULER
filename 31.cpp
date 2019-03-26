#include<iostream>
using namespace std;

int w(int k) {
    static int a[8] = {1, 2, 5, 10, 20, 50, 100, 200};
    return a[k - 1];
}

int f(int k, int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (k == 1) return 1;
    return f(k - 1, n) + f(k, n - w(k));
}

int main() {
    cout<<f(8, 200);
    return 0;
}
