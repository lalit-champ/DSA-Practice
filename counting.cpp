#include<iostream>
using namespace std ;
//void does not return value 
 //function signature
void printCounting(int n){

    //function call
    for (int i=1;i<=n;i++){
       cout<< i <<" ";
} 
cout <<endl;
 
    }
int main(){
    int a;
    cin>>a;
    //funtion call
    printCounting(a);
   // cout<<"the ans is "<<printCounting(a)<<endl;
    return 0;
}   
    