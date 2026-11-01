
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << "No repeating element";
    return 0;
}
