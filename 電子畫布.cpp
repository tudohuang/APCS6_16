#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    int r, c, t, x;
    cin >> H >> W >> N;
    int canva[20][20];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            canva[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        cin >> r >> c >> t >> x; // r,c->繪畫開始座標, t繪畫時間; x->顏色代號
        for (int j = 0; j < H; j++) {
            for (int k = 0; k < W; k++) {
                int distance = abs(j - r) + abs(k - c);
                if (distance <= t) {
                    if (canva[j][k] == 0) {
                        canva[j][k] = x;
                    } else {
                        canva[j][k] += x;
                    }
                }
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (j > 0) cout << " "; // 加上空格來區分各個元素
            cout << canva[i][j];
        }
        cout << endl; // 換行
    }
    
    return 0;
}
