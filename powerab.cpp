#include<iostream>
using namespace std;

    int power (int num1,int num2){
    //int a,b;
    //cin>>num1>>num2;    
    //cout<<a<<endl;
    

    int ans=1;
    for(int i=1;i<=num2;i++) {
    ans =ans * num1;
    }
   // cout <<"ans is "<<ans<<endl;
    return ans ; 
}   
int main(){
    int a,b;
    cout<<"enter a & b "<<endl;
    cin>>a>>b;

   int answer = power(  a , b);
   cout<<"power a^b is "<<answer <<endl;

    int c,d;
    cout<<"enter c & d "<<endl;
    cin>>c>>d;

   int answers = power(c,d);
   cout<<"power c^d is "<<answers <<endl;


   return 0;

}