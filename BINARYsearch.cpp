#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid =(start+end) /2;

    while(start<=end) {

    if(arr[mid]==key){
        return mid;
    }
    if (key>arr[mid]){
        start=mid+1;
    }
    else {
       end=mid-1;
    } mid=(start+end)/2;
  } return -1;
}
int main(){
    //array must be sorted 
    int even[6]={8,9,10,12,100,111};
    int odd[7]={3,21,31,41,51,71,81};
    
    int evenindex =binarysearch(even,6,10);
    cout<<"the index of 10 is"<<evenindex <<endl; 

    int oddindex =binarysearch(odd,7,81);
    cout<<"the index of 31 is"<<oddindex <<endl; 

    return 0;

}