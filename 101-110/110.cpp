// Check for Binary Search Tree

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max!= NULL && root->data >= max->data){
        return false;
    }
    
    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);
    return (leftValid && rightValid);
}

int main(){
    
   Node *root1 = new Node(1);
   root1->left = new Node(2);
   root1->right = new Node(3);

   /*
                1
               / \
              2   3
    */

   if(isBST(root1, NULL, NULL)){
       cout << "Valid BST" << endl;
   }
   else{
       cout << "InValid BST" << endl;
   }

   /*
                5
               / \
              2   8
    */

   Node *root2 = new Node(5);
   root2->left = new Node(2);
   root2->right = new Node(8);

   if(isBST(root2, NULL, NULL)){
       cout << "Valid BST" << endl;
   }
   else{
       cout << "InValid BST" << endl;
   }

   return 0;
}