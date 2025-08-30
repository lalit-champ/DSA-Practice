//#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        //round ke liye 
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
          if(arr[j]>temp){
            //shift krna padhega 
             arr[j+1] =arr[j]; 
          }
          else{ //rukna hai 
            break;
          }
        }
        
    
    arr[j+1]=temp;
    }
}

//yad rakhna insertion sort me shifting hoti hai, swaping nhi  
// arr = [2, 5, 8, 3, 6]   (i = 3, temp = 3)

// Step 1: temp = 3
// Step 2: Compare 8 > 3 → shift → [2, 5, 8, 8, 6]
// Step 3: Compare 5 > 3 → shift → [2, 5, 5, 8, 6]
// Step 4: Compare 2 > 3 → false → break
// ab j = 0 par ruk gya
// ab shi jgaya j+1 = 1 pr hai  →
// arr[j+1] = temp → [2, 3, 5, 8, 6]
