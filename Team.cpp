#include <iostream>
using namespace std;

int main() {
    int g, c = 0;
    cin >> g;

    for (int i = 0; i < g; i++) {
        int p, v, t;
        cin >> p >> v >> t; 

        if (p + v + t >= 2) { 
            c++;
        }
    }

    cout << c;
    return 0;
}

