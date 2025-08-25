#include<iostream>
using namespace std ;
int main(){
    int a,b;
    cout<<"enter a "<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;

    char op;
    cout<< "enter op"<<endl;
    cin>>op;

   switch (op)
   {
   case '+' :cout<<"sum of a+b is "<<a+b;
            break;
   case '-' :cout<<"sum of a-b is "<<a-b;
            break;
   
   case '*' :cout<<"sum of a*b is "<<a*b;
            break;

   case '/' :cout<<"sum of a/b is "<<a/b;
            break;
   
   default: cout<<"enter a valid operation";
    break;
   } 


}