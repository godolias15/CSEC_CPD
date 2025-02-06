#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string username;
    getline(cin, username);
    
    unordered_set<char> unique_chars;
    for (char c : username) {
        unique_chars.insert(c);
    }
    
    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
