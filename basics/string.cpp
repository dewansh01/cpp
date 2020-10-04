#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s="dewa";
    cout<<s.length()<<endl; //preffered over size()
    string s1="dewansh";
    s.append(s1,4,3); //append works faster than + to concatenate;(first argument string from which u want to extract char,second is index from which u want to start extracttion and third is no. of char)
    
    cout<<s<<endl;
    string ss(5,'y'); //use always '' for second argument
                    //function to produce a string with no of. occurence of given char.

    ss.clear(); //will make the string empty;
    
    char c=ss.at(9); //out of bound error generates. and .at() function used to return character at given index.
    
    //.front() and .back() used for first and last character.

    int a=s.find('d'); //returns the index where char is found otherwise npos whose value is -1.
    
    //s.substr(a,b) returns a sub string from index a of length b and if b is not given it goes until end;
    //s.erase(a,b) erase b char from index a
    //s.replace(a,b,str) replaces b char from a index with complete str ;
}

//find function -https://www.geeksforgeeks.org/string-find-in-cpp/