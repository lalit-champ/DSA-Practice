#include<iostream>
using namespace std ;
int main () {
int n;
cout<<"enter any no."<<endl;
cin>>n;    
int ans =0;
while(n>0){
ans=n%10+ans;
n=n/10;

}
cout<<"sum of digit is "<<ans<<endl;
}
