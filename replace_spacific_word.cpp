#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin >> tc;
    while (tc--){
        string sentence, target_str;
        cin >> sentence >>target_str;

        int index = sentence.find(target_str);
        int size = target_str.size();

        if(index != string::npos){
           sentence.replace(index , size, "@");
        }

        cout << sentence << endl;
    }

    return 0;
}