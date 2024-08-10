#include<bits/stdc++.h>
using namespace std;
int main(){
    string para;
    cout<<"Enter paragraph"<<endl;
    getline(cin,para);
    unordered_map<char,int> mp;
    for(char c: para){

        if(isalpha(c)){
                char x=tolower(c);
                mp[x]++;

        }


    }
    for (const auto& pair : mp) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
