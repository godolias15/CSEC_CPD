#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int total = 0;
    for (char c : s) {
        switch (c) {
            case '1':
                total += a[0];
                break;
            case '2':
                total += a[1];
                break;
            case '3':
                total += a[2];
                break;
            case '4':
                total += a[3];
                break;
        }
    }
    cout << total << endl;
    return 0;
}
