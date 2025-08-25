#include<iostream>
using namespace std ;
void printarray(int arr[],int size ){
 for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } cout<<"printing is done "<<endl;
}

int main(){
    //decleration
    int number[15];

    //cout<<"value at index 0 is"<<number[0] <<endl;
    int second[3]={1,2,11};
    //accessing 
     cout<<"value at index 1 is"<<second [1]<<endl;
    
     int third[15]={2,13};
     //int n=7;
     printarray(third,10);
    
     //initializng all location with 0
     int fourth[10]={0};
     printarray(fourth,10);
    //initializing all location with 1{not possible with below line}
    int fifth[10]={1};
     printarray(fifth,10);
    
     int fifthsize = sizeof(fifth)/sizeof(int) ;
     cout <<"size of fifthsize is"<<fifthsize <<endl;

     char ch[5]={'a','e','i','o','u'};
     //printarray(ch,5);
    int m=5;
     for(int i=0;i<m;i++){
        cout<<ch[i]<<" ";
    } cout<<"printing is done "<<endl;

    double firstdouble[3];
    float firstfloat[3];
    bool firstbool[3];

    
    
    
    
    
    
    
    
    
    //  int third[15]={2,13};
    // cout<<"printing the array"<<endl;
    // int n=15;
    // //printing the array
    // for(int i=0;i<n;i++){
    //     cout<<third[i]<<" ";
    // }
    // //initializng all location with 0
    // int fourth[10]={0};
    // cout<<"printing the array"<<endl;
    // int x=10;
    // for(int i=0;i<x;i++){
    //     cout<<fourth[i]<<" ";
    // }
    // //initializing all location with 1{not possible with below line}
    // int fifth[10]={1};
    // cout<<"printing the array"<<endl;
    // int y=10;
    // for(int i=0;i<y;i++){
    //     cout<<fifth[i]<<" ";
    // }

    cout<<"everything is fine"<<endl;

}