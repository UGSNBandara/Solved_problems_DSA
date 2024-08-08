#include <iostream>

using namespace std;

int love(string str,int n,int m, int k){
    int jump=m;
    for(int i=0; i<n; i++){
        if(str[i]=='L'){
            jump=m;
        }
        else if(str[i]=='W'){
            if(jump>1){
                jump-=1;
                continue;}
            else{
                if(k!=0){
                k-=1;
                continue;}
                else{
                    return 0;
                }
            }
        }
        else if(str[i]=='C'){
            if(jump>1){
                jump-=1;
                continue;
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int n,m,k;
    cin>>n>>m>>k;
    cin.ignore();
    string str;
    getline(cin,str);
    if(love(str,n,m,k)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }}


    return 0;
}
