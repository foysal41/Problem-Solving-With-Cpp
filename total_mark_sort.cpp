#include<bits/stdc++.h>
using namespace std;

/* 
    Math marks, and baangla marks. Total marks( sum of math and bangla marks) in devending order. 
    If multiple student have the same or equal mark then sort them according to the id in accending
*/
class Student
{
public: 
    string name;
    int roll;
    char section;
    int math_marks;
    int bangla_marks;
    int cls;
};

bool cmp(Student l, Student r){
    if(l.math_marks + l.bangla_marks > r.math_marks + r.bangla_marks){
        return true;
    }else if(l.math_marks + l.bangla_marks == r.math_marks + r.bangla_marks) {
        return l.roll < r.roll;
    }else{
    return false;
    }
}

int main(){

    int n;
    cin >> n;

    Student arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i].roll >> arr[i].name >> arr[i].section >> arr[i].math_marks >> arr[i].bangla_marks >> arr[i].cls;
    }

    sort(arr, arr+n, cmp);

     for(int i=0; i<n; i++){
        cout << " " <<  arr[i].roll << " " << arr[i].name << " " << arr[i].section << " " << arr[i].math_marks << " " << arr[i].bangla_marks << " " << arr[i].cls << endl;
    }


    return 0;
}



/* 
//------Input 
5
3 rakib B 70 50 9
2 sakib A 50 60 9
1 atiq C 80 75 9
5 habib G 70 60 9
4 rahim H 80 50 9


//-----Output 
 1 atiq C 80 75 9       -> total mark: 155
 4 rahim H 80 50 9      -> total mark: 130
 5 habib G 70 60 9      -> total mark: 130
 3 rakib B 70 50 9      -> total mark: 120
 2 sakib A 50 60 9      -> total mark: 110


*/