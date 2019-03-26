#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int i, x, sum, ans = 0, t;
    for (i = 2; i <= 4000000; i++) {
        x = i;
        sum = 0;
        while(x) {
            t = x % 10;
            sum += pow(t, 5);
            x /= 10;
        }
        if(sum == i) ans += sum;
    }
    cout<<ans;
    return 0;
}
