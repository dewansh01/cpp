#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3]={1,2,3};
    cout<<a[4]; //no out of checking and garbage value will be returned
    cout<<a; //will return the adress of the first element
}