/*************************************************************************
	> File Name: 45.cpp
	> Author: TaoYu
	> Mail: 2810119380@qq.com
	> Created Time: 2019年04月21日 星期日 14时39分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int p(int n) {
    return n * (3 * n - 1) / 2;
}

int h(int n) {
    return n * (2 * n - 1);
}
 
int binary_search(int (*num)(int), int n, int val) {
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = (left + right) >> 1;
        if (num(mid) == val) return mid;
        else if (num(mid) > val) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    int n = 166;
    while(binary_search(h, n, p(n)) == -1) {
        ++n;
    }
    cout<<p(n)<<endl;
    return 0;
}

