#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int l = 0, u = 0;
    for (char c : s) {
        if (c >= 'a') {
            l++;
        } else {
            u++;
        }
    }
    
    string result;
    if (u <= l) {
        for (char c : s) {
            result += tolower(static_cast<unsigned char>(c));
        }
    } else {
        for (char c : s) {
            result += toupper(static_cast<unsigned char>(c));
        }
    }
    
    cout << result << endl;
    
    return 0;
}
