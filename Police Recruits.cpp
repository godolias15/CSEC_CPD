#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> crimes(n);
    for (int i = 0; i < n; ++i) {
        cin >> crimes[i];
    }

    int t = 0, a = 0;
    if (crimes[0] == -1) {
        t++;
    } else {
        a += crimes[0];
    }

    for (int i = 1; i < n; ++i) {
        if (crimes[i] == -1) {
            if (a > 0) {
                a--;
            } else {
                t++;
            }
        } else {
            a += crimes[i];
        }
    }

    cout << t << endl;
    return 0;
}
