class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =m-1, j=n-1, k=m+n-1;
        
        while(i>=0 && j>=0){
        
            if(nums1[i] > nums2[j]){
                nums1[k--]=nums1[i--];
                // nums1[k]=nums1[i];
                // k++;
                // i++;


            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
          while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
    void print(int ans[],int n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<endl;
        }
    }
    int main(){
        vector<int> nums1;
        int m ;
        vector<int> nums2;
         int n ;

        merge(nums1,m,nums2,n);
        print(nums1.data(), m+n);

        return 0;
    }
};