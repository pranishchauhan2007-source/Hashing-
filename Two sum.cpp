#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x = target - arr[i];

        if (mp.find(x) != mp.end()) {
            cout << mp[x] << " " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No pair found";

    return 0;
}
