
#include<bits/stdc++.h>
using namespace std;
int main (){
    
    string names;
    getline(cin, names);

    stringstream name(names);
    string word;
    

    int found = false;

    while (name >> word)
    {
        if(word == "Jessica"){
            found = true;
            break;
        }
    }
    
    
    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }


     return 0;
}


//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-07/challenges/find-jessica