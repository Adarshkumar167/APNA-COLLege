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