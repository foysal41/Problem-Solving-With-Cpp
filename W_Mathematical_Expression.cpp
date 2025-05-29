#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    char s , q;
    cin >> a >> s >> b >> q >> c; 

    if(s == '+' && q == '='){
        if(a + b == c){
            cout << "Yes";
        }else{
             cout << a+b << endl;
        }
    }else if (s == '-' && q == '='){
        if(a - b == c){
            cout << "Yes";
        }else{
             cout << a-b << endl;
        }
    }else if (s == '*' && q == '='){
        if(a * b == c){
            cout << "Yes";
        }else{
             cout << a*b << endl;
        }
    }

    return 0; 
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W