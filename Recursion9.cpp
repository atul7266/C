#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int lastocc(int arr[], int n, int i, int key){
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
   
 int arr[]={4,2,1,2,5,2,7};
 cout<<lastocc(arr,7,0,2)<<endl;
 return 0;
 }


