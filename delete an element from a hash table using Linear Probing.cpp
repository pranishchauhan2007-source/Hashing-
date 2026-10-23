#include <iostream>
using namespace std;

#define SIZE 10

int hashFunction(int key) {
return key % SIZE;
}

void insert(int table[], int key) {
int index = hashFunction(key);
int start = index;

while (table[index] != -1 && table[index] != -2) {
    index = (index + 1) % SIZE;

    if (index == start) {
        cout << "Hash table is full!" << endl;
        return;
    }
}

table[index] = key;

}

void deleteElement(int table[], int key) {
int index = hashFunction(key);
int start = index;

while (table[index] != -1) {
    if (table[index] == key) {
        table[index] = -2;
        cout << "Element deleted successfully." << endl;
        return;
    }

    index = (index + 1) % SIZE;

    if (index == start)
        break;
}

cout << "Element not found." << endl;

}

void display(int table[]) {
cout << "\nHash Table:\n";

for (int i = 0; i < SIZE; i++) {
    if (table[i] == -1 || table[i] == -2)
        cout << "Index " << i << ": Empty" << endl;
    else
        cout << "Index " << i << ": " << table[i] << endl;
}

}

int main() {
int table[SIZE];

for (int i = 0; i < SIZE; i++)
    table[i] = -1;

int n, key;

cout << "Enter number of elements: ";
cin >> n;

if (n < 0 || n > SIZE) {
    cout << "Invalid number of elements." << endl;
    return 1;
}

cout << "Enter elements: ";

for (int i = 0; i < n; i++) {
    cin >> key;
    insert(table, key);
}

display(table);

cout << "\nEnter element to delete: ";
cin >> key;

deleteElement(table, key);

display(table);

return 0;

}