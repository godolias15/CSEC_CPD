#include <iostream>
#include <map>

using namespace std;

int main() {
    int teams;
    cin >> teams;
    map<int, int> h, g;
    int k = 0;

    for (int i = 0; i < teams; ++i) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            k++;
        }
        h[x]++;
        g[y]++;
    }

    int c = 0;
    for (auto &pair : h) {
        int color = pair.first;
        if (g.find(color) != g.end()) {
            c += pair.second * g[color];
        }
    }

    c -= k;
    cout << c << endl;

    return 0;
}
