// Object Oriented Programming in C++ 
#include<bits\stdc++.h>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }// Default constructor

    student(string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }// Parameterised Constructor

    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }// Copy Constructor

    ~student(){
        cout<<"Destructor called"<<endl;;
    }

    void setName(string s){
        name = s;
    }

    void getName(string s){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name : ";
        cout<<name<<endl;
        cout<<"Age : ";
        cout<<age<<endl;
        cout<<"Gender : ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){

    /*student a;
    a.name = 'Adarsh';
    a.age = 20;
    a.gender = 0;*/

    /*student arr[3];
    for(int i = 0; i<3; i++){
        string s;
        cout<<"Name : ";
        //cin>>arr[i].name;
        cin>>s;
        arr[i].setName(s);
        cout<<"Age : ";
        cin>>arr[i].age;
        cout<<"Gender : ";
        cin>>arr[i].gender;
    }

    for(int i=0; i<3;i++){
        arr[i].printInfo();
    }*/

    student a("Adarsh", 20, 0);
    //a.printInfo();
    student b("Yamini", 19, 1);
    student c = a;
    //c.printInfo();

    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    
    return 0;
}
//Shallow copy & Deep copy