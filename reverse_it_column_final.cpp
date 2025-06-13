
#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;

};



int main (){
   
    int tc;
    cin >> tc;
    Student arr[tc];

    for(int i=0; i<tc; i++){
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
    }

    int i=0, j = tc-1; 

    while (i < j)
    {
         swap(arr[i].section , arr[j].section );
        i++;
        j--;
    }
    

      for(int i=0; i<tc; i++){
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }





     return 0;
}


//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-07/challenges/reverse-it-8-2



/* 
3
Rakib 7 B 90
Sakib 10 A 85
Ahsan 9 C 36

//----------- Output
Rakib 7 C 90    C
Sakib 10 A 85   A
Ahsan 9 B 36    B
 
*/