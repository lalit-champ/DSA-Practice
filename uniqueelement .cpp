#include<iostream>
using namespace std;
int  uniqelem(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    return ans;


}

int main (){
    int arr[5]={1,2,1,3,3};
    int size=5;
    uniqelem(arr, size);
}