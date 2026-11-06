#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 7, 2}; 
    int n = 5;                   
    int target = 7;              
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Elementiin " << target << " index " << i << " irratti argameera." << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Elementiin kun array keessa hin jiru." << endl;
    }

    return 0;
}