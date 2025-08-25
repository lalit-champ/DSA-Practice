#include<iostream>
using namespace std;
void update(int num[],int n){
    cout<<endl<<"inside the function "<<endl;
    num[0]=120;
    //printing the array
 for(int i=0;i<n;i++){
   cout<<num[i]<<" "<<endl;

 } cout<<endl;
 cout<<"going back to main fuction"<<endl;

}
int main (){
    
    int num[3] ={1,2,3};
     update(num,3);
     cout<<endl<<"outside the function"<<endl;
    for(int i=0;i<3;i++){
        cout<<num[i]<<" "<<endl;
    }
    //update(num,3);
    cout<<"returning to main function"<<endl;


}