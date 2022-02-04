#include<iostream>
using namespace std;

int firstoccurance(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }

    return firstoccurance(arr, n, i+1,key);
}

//yet to understand
int lastoccurance(int arr[], int n, int i, int key){
    
    if(i==n){
        return -1;
    }

    int restArray = lastoccurance(arr,n,i+1,key);
    
    if(restArray!=-1){
        return restArray;
    }

    if(arr[i]==key){
        return i;
    }

    return -1;
}

int main(){
    int key;
    cin>>key;

    int arr[] = {4,2,1,2,5,2,7};

    cout<<firstoccurance(arr,7, 0,key)<<endl;
    cout<<lastoccurance(arr,7, 0,key)<<endl;
     
    return 0;
}