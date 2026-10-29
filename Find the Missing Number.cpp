
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    unordered_set<int> s;

    for (int i = 0; i < n - 1; i++) {
        s.insert(arr[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (s.find(i) == s.end()) {
            cout << "Missing number: " << i;
            break;
        }
    }

    return 0;
}
