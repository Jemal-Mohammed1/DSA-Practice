#include <iostream> 
using namespace std; 
// Define the Node structure 
struct Node { 
int data; 
Node *left, *right; 
Node(int val) : data(val), left(nullptr), right(nullptr) {} 
}; 
// 1. Insertion Operation (Recursive) 
Node* insert(Node* root, int val) { 
if (root == nullptr) return new Node(val); 
if (val < root->data) 
root->left = insert(root->left, val); 
else if (val > root->data) 
root->right = insert(root->right, val);        
return root; 
} 
// 2. Search Operation 
bool search(Node* root, int val) { 
if (root == nullptr) return false; 
if (root->data == val) return true; 
if (val < root->data) return search(root->left, val); 
return search(root->right, val); 
} 
// 3. In-order Traversal (Left, Root, Right) - Prints sorted order 
void inorder(Node* root) { 
if (root == nullptr) return; 
inorder(root->left); 
cout << root->data << " "; 
inorder(root->right); 
} 
// 4. Pre-order Traversal (Root, Left, Right) 
void preorder(Node* root) { 
if (root == nullptr) return; 
cout << root->data << " "; 
preorder(root->left); 
preorder(root->right); 
} 
// 5. Post-order Traversal (Left, Right, Root) 
void postorder(Node* root) { 
if (root == nullptr) return; 
postorder(root->left); 
postorder(root->right); 
cout << root->data << " "; 
} 
int main() { 
Node* root = nullptr; 
// Insert values 
int values[] = {50, 30, 70, 20, 40, 60, 80}; 
for (int v : values) { 
root = insert(root, v); 
} 
cout << "In-order: "; inorder(root); cout << endl; 
cout << "Pre-order: "; preorder(root); cout << endl; 
cout << "Post-order: "; postorder(root); cout << endl; 
// Search example 
int key = 60; 
if (search(root, key)) cout << "\nFound " << key << " in the tree."; 
else cout << "\n" << key << " not found."; 
return 0; 
}    