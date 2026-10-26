 vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>a;
        int start=0,end=arr.size()-1;
        while(start<end){
            if(arr[start]+arr[end]==target){
                a.push_back(start);
                a.push_back(end);
                return a;
              }
            else if(arr[start]+arr[end]<target){
                start++;
            }
            else{
                end--;
            }
        }
          
           
        return a;
    }


    //three sum
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(int i=0;i<n-2;i++){
            int ans=target-arr[i];
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return true;
                }
                else if(arr[start]+arr[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return false;
    }