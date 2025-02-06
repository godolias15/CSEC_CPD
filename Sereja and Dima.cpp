#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int s = 0, d = 0;
    int l = 0, r = n - 1;
    bool is_s_turn = true;

    while (l <= r) {
        if (is_s_turn) {
            if (nums[l] > nums[r]) {
                s += nums[l];
                l++;
            } else {
                s += nums[r];
                r--;
            }
            is_s_turn = false;
        } else {
            if (nums[l] > nums[r]) {
                d += nums[l];
                l++;
            } else {
                d += nums[r];
                r--;
            }
            is_s_turn = true;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}
