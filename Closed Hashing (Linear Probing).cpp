#include <iostream> 
using namespace std; 
 
int main() { 
    const int SIZE = 10; 
    int table[SIZE]; 
 
    for (int i = 0; i < SIZE; i++) 
        table[i] = -1; 
 
    int values[] = {23, 43, 13, 27}; 
 
    for (int i = 0; i < 4; i++) { 
        int key = values[i]; 
        int index = key % SIZE; 
 
        while (table[index] != -1) 
            index = (index + 1) % SIZE; 
 
        table[index] = key; 
    } 
 
    for (int i = 0; i < SIZE; i++) 
        cout << i << " -> " << table[i] << endl;
        return 0;
        
        	
		}