
#include<iostream>
using namespace std;

bool base(int a, int b) {
    int x = a, t = 0;
    while(x) {
        t = t * b + x % b;
        x /= b;
    }
    if (t == a) return 1;
    else return 0;
}


int main() {
    int i, ans = 0;
    for (i = 1; i < 1000000; i++) {
        if (base(i, 2) == 1 && base(i, 10) == 1) 
            ans += i;   
    }
    cout<<ans;
    return 0;
}
