bool canSplit(vector<int>& arr) {
        // code here
        int totalSum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }
        int prefix=0;
        int ans;
        for(int i=0;i<n-1;i++){
           prefix+=arr[i];
           ans=totalSum-prefix;
           if(ans==prefix){
               return true;
           }
           
        }
        return false;
    }