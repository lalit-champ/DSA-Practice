#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void swapalt(int arr[],int size){
    for(int i=0;i<size;i+=2 ) {
    
    if(i+1<size){
    swap(arr[i],arr[i+1]);
    }
}

    

}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int brr[5]={5,4,3,2,1};

    swapalt(arr,10);
    swapalt(brr,5);

    printarray(arr,10);
    printarray(brr,5);
}