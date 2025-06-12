#include<bits/stdc++.h>
using namespace std;
int main (){
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++){
        string s;
        cin >> s;
        if(s.find("101") != string::npos || s.find("010") != string::npos){
            cout << "Good" << endl;
        }else{
            cout << "Bad" << endl;
        }

    }
    
     return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
