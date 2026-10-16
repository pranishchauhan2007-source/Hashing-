#include <iostream>
#include <list>
using namespace std;

#define SIZE 10

int main()
{
    list<int> hashTable[SIZE];
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter key: ";
        cin >> key;

        int index = key % SIZE;
        hashTable[index].push_back(key);
    }

    cout << "\nHash Table:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " -> ";

        for (int key : hashTable[i])
        {
            cout << key << " -> ";
        }

        cout << "NULL" << endl;
    }

    return 0;
}