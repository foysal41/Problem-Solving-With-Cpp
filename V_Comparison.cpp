#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    char S;
    cin >> A >> S >> B;

    if(S == '<'){
        if(A < B){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if (S == '>'){
        if(A > B){
            cout << "Right";
        }
    }else if (S == '='){
        if(A == B){
            cout << "Right";
        }
    }
    return 0;
}



//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V