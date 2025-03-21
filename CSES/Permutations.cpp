#include<iostream>
using namespace std;

#define ll long long

int main(){

    int n = 0;
    cin>>n;

    if(n == 1)cout<<1<<endl;
    else if(n <= 3){
        cout<<"NO SOLUTION"<<endl;
    }else{

        int ev = (n%2 == 0) ? n : n-1;
        int odd = (n%2 == 1) ? n : n-1;

        for(int i=2;i<=ev;i+=2){
            cout<<i<<" ";
        }

        for(int i=1;i<=odd;i+=2){
            cout<<i<<" ";
        }

    }

    return 0;

}