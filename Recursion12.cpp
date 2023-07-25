#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void replaceAS(string s){
    if(s.length()==0){
         return ;
    }

    if(s[0]=='A' && s[1]=='S'){
        cout<<"Atul";
        replaceAS(s.substr(2));
    }
    else{
        cout<<s[0];
        replaceAS(s.substr(1));
    }
}  
int main(){

 replaceAS("ASASSSSAAA");  
 
 return 0;
 }


