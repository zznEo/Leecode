#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        while (j < typed.length()) {
            if (i < name.length() && name[i] == typed[j]) {
                i++;
                j++;
            } else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            } else {
                return false;
            }
        }
        return i == name.length();
    }
};

Solution s1;
int main() {
    cout << s1.isLongPressedName("alex", "aaleex") << endl;
    return 0;
}