
#include<iostream>
using namespace std;

int a[20][20] = {0};
int dir[4][2] = {0, 1, 1, 0, 1, 1, 1, -1};

int main() {
    int i, j, ans = 0, p = 0, k, l, x, y;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            cin>>a[i][j];
        }
    }
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            for (k = 0; k < 4; k++) {
                p = 1;
                for (l = 0; l < 4; l++) {
                    x = i + dir[k][0] * l;
                    y = j + dir[k][1] * l;
                    if (x < 0 || x >= 20) {
                        p = 0; 
                        break;
                    }
                    if (y < 0 || y >= 20) {
                        p = 0; 
                        break;
                    }
                    p *= a[x][y];
                }
                if (p > ans) ans = p;
            }
        }
    }
    cout<<ans;

    return 0;
}
