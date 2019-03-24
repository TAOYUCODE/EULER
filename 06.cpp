#include<iostream>
using namespace std;

int main() {
    int i, j;
    long long ans = 0, x = 0, num = 0;
    for (i = 1; i <= 100; i++) {
        x = i;
        ans += x * x; 
        
    }
    num = 5050 * 5050;
    cout<<num - ans;
    return 0;
}
