#include<iostream>
using namespace std ;
int  firstoccur(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    

    while(start<=end){
      if(arr[mid]==key){
        ans=mid;
        end=mid-1;
      }
      else if(key > arr[mid]){//right me jao 
         start=mid +1;
      }
      else if (key< arr[mid]){//left me jao 
        end=mid-1;
      }
      mid=start+(end-start)/2;
    } 
    return ans ;
}
int  lastoccur(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=0;
    

    while(start<=end){
      if(arr[mid]==key){
        ans=mid;
        start=mid+1;
      }
      else if(key > arr[mid]){//right me jao 
         start=mid +1;
      }
      else if (key< arr[mid]){//left me jao 
        end=mid-1;
      }
      mid=start+(end-start)/2;
    } 
    return ans ;
}
int main(){
    int even[10]={1,2,3,3,3,3,3,3,3,5};
    
    cout<<"the first occurance of 3 is at index "<<firstoccur(even,10,3)<<endl;
    cout<<"the first occurance of 3 is at index "<<lastoccur(even,10,3)<<endl;
    return 0;
}