#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=10;
    int *p=&n; //& for address(used with int var) and * for value(used with pointer var)
    *p=20;
    cout<<n;
}