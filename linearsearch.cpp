#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<10;i++){
       if (arr[i]==key){
        return 1;
    }
        
    }
    return 0;
}
int main (){
    int arr[10]={2,4,-1,7,10,8,9,1,0,-5};
    cout<<"enter the element for search "<<endl;
    int key;
    cin>>key;

    bool found =search(arr,10,key);

    if (found){
        cout<<"key is present "<<endl;
    }
    else {
        cout<<"key is not present "<<endl;
    }
   return 0;
}