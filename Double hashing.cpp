#include <iostream>
using namespace std;

#define SIZE 7

int hash1(int key) {
return key % SIZE;
}

int hash2(int key) {
return 5 - (key % 5);
}

int main() {
int table[SIZE];

int keys[] = {10, 17, 24};
int n = 3;

for (int i = 0; i < SIZE; i++) {
    table[i] = -1;
}

for (int j = 0; j < n; j++) {
    int key = keys[j];
    int index = hash1(key);
    int i = 0;

    while (table[index] != -1 && i < SIZE) {
        i++;
        index = (hash1(key) + i * hash2(key)) % SIZE;
    }

    if (i < SIZE) {
        table[index] = key;
    } else {
        cout << "Hash table is full for key "
             << key << endl;
    }
}

cout << "Hash Table:" << endl;

for (int i = 0; i < SIZE; i++) {
    cout << "Index " << i << ": ";

    if (table[i] == -1)
        cout << "Empty";
    else
        cout << table[i];

    cout << endl;
}

return 0;

}