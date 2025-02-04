#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cubes(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> cubes[i];
    }
    
    sort(cubes.begin(), cubes.end());
    
    for (size_t i = 0; i < cubes.size(); ++i) {
        if (i > 0) cout << " ";
        cout << cubes[i];
    }
    
    return 0;
}
