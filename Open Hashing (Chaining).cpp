#include <iostream> 
#include <list> 
using namespace std; 
 
class HashTable { 
    static const int SIZE = 5; 
    list<int> table[SIZE]; 
 
public: 
    void insert(int key) { 
        int index = key % SIZE; 
        table[index].push_back(key); 
    } 
 
 
    void display() { 
        for (int i = 0; i < SIZE; i++) { 
            cout << i << ": "; 
            for (int value : table[i]) 
                cout << value << " -> "; 
            cout << "NULL\n"; 
        } 
    } 
}; 
 
int main() { 
    HashTable h; 
    h.insert(10); 
    h.insert(15); 
    h.insert(20); 
    h.insert(7); 
 
    h.display(); 
    return 0; 
} 
