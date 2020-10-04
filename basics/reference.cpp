#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int & p=n; //creates a alternative name of a existing variable
    p=20;
    cout<<p;

    vector<int>v={1,2,3};
    for (int &x:v){ // ca modiify the values of vector.
        x=x+3;
    }
    for(int y:v){
        cout<<y;
    }
    cout<<"\n";

    int a=10;
    void * aa=&a;
    cout<<aa; //retuens the adress of a.
}

//if a function recives a reference to a variable it can change the value of var.
//it saves time if large object is passed to function

//there can be void pointer but there cant be a reference to void objects;


