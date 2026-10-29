#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 2};
    int b[] = {2, 3, 1, 2};
    int n = 4;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
        freq[b[i]]--;
    }

    for (auto x : freq) {
        if (x.second != 0) {
            cout << "Not Equal";
            return 0;
        }
    }

    cout << "Equal";
    return 0;
}