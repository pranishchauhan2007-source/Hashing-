#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool areEqual(vector<int>& arr1, vector<int>& arr2) {
if (arr1.size() != arr2.size())
return false;

unordered_map<int, int> freq;

for (int x : arr1) {
    freq[x]++;
}

for (int x : arr2) {
    freq[x]--;
    if (freq[x] < 0)
        return false;
}

return true;

}

int main() {
vector<int> arr1 = {1, 2, 2, 3};
vector<int> arr2 = {3, 2, 1, 2};

if (areEqual(arr1, arr2))
    cout << "Yes";
else
    cout << "No";

return 0;

}