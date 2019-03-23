#include<iostream>
using namespace std;

int main() {
    int i, j, ans = 0, n, t = 0;
    for (i = 999; i >= 100; i--) {
        for (j = 999; j >= 100; j--){
            n = i * j;
            int x = n;
            t = 0;
            while (n) {
                t = t * 10 + n % 10;
                n /= 10;
            }
            if(t == x && ans < t) ans = t;
        } 
    }
    cout<<ans;
    return 0;
}
