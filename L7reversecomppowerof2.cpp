#include<iostream>
#include<math.h>
using namespace std;
//*********reverse **************
// class solution {
//     public:
    
//     int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//             int digit =x % 10;

//             if ((ans > pow(2,31)-1/10  || ans < pow(-2,31)/10  )){
//                 return 0;
//             }
//             ans = (ans*10)+digit;
//             x=x/10;
//         }
//         return ans;
//     }
    //*******complement ********* */
// class Solution {
// public:
// int bitwiseComplement(int n) {
       
//       int m=n;
//       int mask=0;

//       //edge case 
//       if (n== 0)
//       return 1;

//       while(n!=0) {
//       mask=(mask<<1)|1;
//       m=m>>1;
//     }
//     int ans =(~n)& mask;
//     return ans ;

//     }
    
// };
//********** power of 2************************ */
class Solution{
    public:
    bool ispoweroftwo( int n ) {
         
        int ans = 1;
        for(int i =0 ; i<=30; i++){

            int ans =pow (2,i);

            if(ans == n)
            {
                return true;
            }
        }
        return false;

    }

};