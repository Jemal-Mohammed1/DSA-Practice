#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std; 
 
int main() { 
    int vertices = 5; 
    vector<int> graph[5]; 
 
    graph[0].push_back(1); 
    graph[0].push_back(2); 
    graph[1].push_back(3); 
    graph[2].push_back(4); 
 
    vector<bool> visited(vertices, false); 
    queue<int> q; 
  
 
    q.push(0); 
    visited[0] = true; 
 
    while (!q.empty()) { 
        int node = q.front(); 
        q.pop(); 
 
        cout << node << " "; 
 
        for (int neighbor : graph[node]) { 
            if (!visited[neighbor]) { 
                visited[neighbor] = true; 
                q.push(neighbor); 
            } 
        } 
    } 
 
    return 0; 
} 