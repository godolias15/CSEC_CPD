#include <iostream>
using namespace std;

int main() {
    int n, prev, current;
    cin >> n;
    cin >> prev;
    int count = 1;
    
    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current != prev) {
            count++;
            prev = current;
        }
    }
    
    cout << count << endl;
    return 0;
}
