#include <iostream>
#include <list>
using namespace std;

#define SIZE 10

list<int> hashTable[SIZE];

void insert(int key) {
int index = key % SIZE;
hashTable[index].push_back(key);
}

void display() {
for (int i = 0; i < SIZE; i++) {
cout << i << " -> ";

    for (int key : hashTable[i])
        cout << key << " -> ";

    cout << "NULL" << endl;
}

}

int main() {
insert(12);
insert(22);
insert(32);
insert(15);

display();

return 0;

}