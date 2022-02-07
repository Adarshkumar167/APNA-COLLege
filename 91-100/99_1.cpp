// Height Balanced Binary Tree - Optimized

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
            1
          /   \
         2     3
        / \   / \ 
       4   5 6   7
*/

bool isBalanced(Node* root, int* height){
    
    if(root == NULL){
        return true;
    }

    int lh = 0, rh = 0;
    if(isBalanced(root -> left, &lh) == false){
        return false;
    }
    if(isBalanced(root -> right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) + 1;   
    if(abs(lh - rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    //Not balanced;
    /*
            1
           /
          2
        /
       3
    */

    Node* root1 = new Node(1);
    root1 -> left = new Node(2);
    root1 -> left -> left = new Node(3);

    int height = 0;
    if(isBalanced(root, &height)){
        cout << "Balanced Tree" << "\n";
    }
    else{
        cout << "Unbalanced Tree" << "\n";
    }
    return 0;
}