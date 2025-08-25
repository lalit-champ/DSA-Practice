#include<iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;
int getmax(int num[],int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
    //  if( num[i]> max){
    //  max=num[i];
    // }
   
}
 //returning max
     return maxi;
}
int getmin(int num[],int n){
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    //  if( num[i]< min){
    //  min=num[i];
    // }
   
}
 //returning min
     return mini;
}
int main(){
    int size ;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++)
    {
     cin>>num[i];
    }
  cout<<"the max value is "<<getmax(num,size)<<endl;
  cout<<"the min value is "<<getmin(num,size)<<endl;
}