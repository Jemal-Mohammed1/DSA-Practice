#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 
struct Node { 
string data; // will store the data or value of the node 
vector<Node*> children; // List of pointers to children nodes  vector: A dynamic array that 
//can grow or shrink in size. 
// Constructor for easy initialization 
Node(string val) : data(val) {} 
}; 
// Function to create and add a child to a parent node 
//a pointer to the parent node to which the child will be added (Node* parent) and the data for the 
//new child node (string childData)  
void addChild(Node* parent, string childData) { 
// this creates the child node (new node object) that will be added to the parent. 
// allocates memory for a new Node object and initializes it with the given childData (new 
//Node(childData))  
// a pointer to the newly created node (Node* newNode) 
Node* newNode = new Node(childData); 
// this adds the new child node to the parent’s list of children. 
parent->children.push_back(newNode); 
} 
// Function to print the tree (Depth-First Search) 
// a pointer to the root node of the tree (Node* root) 
// an optional parameter that specifies the current depth of the node in the tree (int depth=0) 
//Depth is defined as the number of edges from the root node to any specific node. Since there 
//are 0 edges between the root and itself, the root sits at depth 0. Depth of any child node is 
//mathematically determined as: Depth of child= Depth of parent + 1   
void printTree(Node* root, int depth = 0) { 
// the tree is empty or the node does not exist (return)  
if (root == nullptr) return;
// the loop prints spaces based on the current depth of the node (root depth=0, its children=1)  
for (int i = 0; i < depth; i++) {   
cout << "  "; 
} 
cout <<root->data << endl; 
// Recursively print all children (loop iterates over all the children of the current root node) 
for (Node* child : root->children) { 
printTree(child, depth + 1); 
}} 
int main() { 
// 1. Create the root node 
Node* root = new Node("MWU"); 
// 2. Add children to the root 
addChild(root, "College of Engineering"); 
addChild(root, "College of Computing"); 
// 3. Add children to sub-nodes 
// Accesses the first child of the root node 
addChild(root->children[0], "Civil Engineering"); 
addChild(root->children[0], " Mechanical Engineering "); 
addChild(root->children[0], " Water Engineering "); 
addChild(root->children[0], " Computer Engineering "); 
// Accesses the second child of the root node 
addChild(root->children[1], " Computer Science"); 
addChild(root->children[1], " Information Technology"); 
addChild(root->children[1], " Information System"); 
// 4. Print the structure 
cout << "General Tree Structure:" << endl; 
printTree(root); 
return 0;    
}