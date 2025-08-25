#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int searchrotaate(int arr[],int n,int key){
 if(arr[getpivot])<=key<=arr[n-1]{
    for(int i=getpivot;i<n-1;i++){
       if ( arr[i]==key){
        return i;
       }
       
    } return -1;
   }
   else {arr[0]<=key<=arr

   }

}
int main(){
    int arr[5]={7,9,1,2,3};
    searchrotate();
    return 0;
}