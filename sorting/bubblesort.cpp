//#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n-1;i++){
        //for round 1
        bool swapped = false;
        for (int j=0;j<n-i;j++){
            //process n-1 tak chalegi kyuki j decrease ho rha hai har round me 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped ==false){
            break;
            //already sorted 
        }
    }
}
