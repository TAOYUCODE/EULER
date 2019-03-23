#include<iostream>
using namespace std;
#define NUM 600851475143

int main() {
    long long int i, ans, num = 600851475143;
    for (i = 1; i * i < NUM; i++) {
        if (num % i == 0) {
            num /= i;
            ans = i;
        }
    }
    if (num != 1) ans = num;
    cout<<ans;   
    return 0;
}
