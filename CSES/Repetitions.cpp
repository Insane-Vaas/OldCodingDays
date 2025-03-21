#include<iostream>
using namespace std;

#define ll long long

int main(){

    string str = "";
    cin>>str;
    char curr = str[0];
    ll count = 1, maxl = 0;
    for(int i=1;i<str.length();i++){
        
        if(str[i] == curr){
            count++;
        }else{
            curr = str[i];
            maxl = max(maxl,count);
            count = 1;
        }
        maxl = max(maxl,count);
    }
    maxl = max(maxl,count);
    cout<<maxl<<endl;

    return 0;
}