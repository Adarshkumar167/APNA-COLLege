//Maze problem
#include<bits\stdc++.h>
using namespace std;

int countPath(int n, int i, int j){

    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return countPath(n,i,j+1) + countPath(n,i+1,j);  
}

int main(){

    cout<<countPath(3,0,0)<<endl;

    return 0;
}