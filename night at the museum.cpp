#include <iostream>
#include <string>
#include <cstdlib>  

using namespace std;

int main() {
    string s;
    cin >> s;
    int total = 0;
    char prev = 'a';  
    
    for (char c : s) {
        int diff = abs(c - prev);
        if (diff > 13) {
            total += 26 - diff;
        } else {
            total += diff;
        }
        prev = c;
    }
    
    cout << total << endl;
    return 0;
}
