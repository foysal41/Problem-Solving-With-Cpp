#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int l = 0; int r = n-1;
    int palindron = 1;
    while(l < r){
        if(arr[l] != arr[r]){
            palindron = 0; 
            break;

       } 

        l++;
        r--;            
    }

     if(palindron == 1){
            cout << "YES";
        }else{
            cout << "NO";
        }
      

         return 0;
    }


//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
