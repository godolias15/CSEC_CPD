#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

void toLower(string &str) {
    for (auto &c : str) {
        c = tolower(static_cast<unsigned char>(c));
    }
}

int main() {
    string f, s;
    getline(cin, f);
    getline(cin, s);
    
    toLower(f);
    toLower(s);
    
    if (f > s) {
        cout << 1 << endl;
    } else if (f < s) {
        cout << -1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
