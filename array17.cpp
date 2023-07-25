#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){

    int currentSum=0;
   int MaxSum=INT_MIN;
   for(int i=0;i<n;i++){
     currentSum+=arr[i];
     if(currentSum<0){
     currentSum=0;
   }
   MaxSum=max(MaxSum,currentSum);
 }
 return MaxSum;
}

int main(){

 int n;
 cin>>n;

 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
  int wrapsum=0;
   int nonwrapsum;

   nonwrapsum=kadane(arr,n);
   int totalsum=0;
   for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
   }
    wrapsum=totalsum + kadane(arr,n);
    
    cout<<max(wrapsum,nonwrapsum)<<endl;
    
 return 0;
 }


