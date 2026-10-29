#include<iostream>
#include<vector>
#include<climits>

int maxSubArray(vector<int> &nums) {
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

  int maxSubarraySum(vector<int> &arr, int k) {
        // code here
        int sum=0,res=0;
        int low=0,high=k-1;
        //For First Window
        for(int i =low;i<=high;i++){
            sum=sum+arr[i];
        }
        
        while(high<arr.size()){
            res=max(sum,res);
            low++;
            high++;
            if(high==arr.size()){
                break;
            }
            sum=sum-arr[low-1];
            sum=sum+arr[high];
        }
        return res;
    }    