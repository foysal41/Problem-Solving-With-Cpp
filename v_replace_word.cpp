#include<bits/stdc++.h>
using namespace std;

int main (){

    string s;
    cin >> s;

    while(1){
     int index = s.find("EGYPT");

        if(index != string::npos){
            
            s.erase(index, 5);
            s.insert(index , " ");
        }else{
            break;
        }
    }

    cout << s ;
    
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V