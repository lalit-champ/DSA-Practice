        class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0, j=0, k=0;
        
        while(i<n && j<m){
            if(nums1[i]=0)
            if(nums1[i]<nums2[j]){
                nums1[i++]=nums2[j++];
            }
            else(nums1[i]>nums2[j]){
                nums1[i++]=nums2[j++];
            }
        }
        while(i<n){
            nums1[i++]=nums2[j++];
        }
        while(j<m){
            nums1[i++]=nums2[j++];
        }
    }
    void print(int ans[],int n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<endl;
        }
    }
    int main(){
        merge(nums1[i],n,nums[2],m,nums1[i]);
        print(nums1[i],m+n);
        return 0;
    }
};
