int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int prefix=0;
        int n= nums.size();

        for(int i=0;i<n;i++){
            prefix+=nums[i];
            maxSum=max(maxSum,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxSum;
    }