#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "aabbcddee";
    unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    for (char ch : s) {
        if (freq[ch] == 1) {
            cout << ch;
            return 0;
        }
    }

    cout << "No unique character";
    return 0;
}
