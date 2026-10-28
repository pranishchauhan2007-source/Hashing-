
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            cout << arr[i] << " ";
            freq[arr[i]] = 0;
        }
    }

    return 0;
}
