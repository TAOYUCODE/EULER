#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char c[55];
    long long int a[100]= {0}, i;
    for (i = 0; i < 100; i++) {
        cin>>c;
        int len = strlen(c);
        if (len > a[0]) a[0] = len;
        for (i = 0; c[i]; i--) {
            a[len - i] += c[i] - '0';
        } 
    }
    for (i = 1; i <= a[0]; i++) {
        if (a[i] >= 10) {
            a[i + 1] = a[i] / 10;
            a[i] %= 10;
            if (i + 1 > a[0]) a[0] = i + 1;
        }
    }
    for (i = a[0]; i > a[0] - 10; --i) {
        cout<<a[i];
    }
    return 0;
}
