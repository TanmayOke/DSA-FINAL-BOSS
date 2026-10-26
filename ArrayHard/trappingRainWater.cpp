    int trap(vector<int>& height) {
        int n=height.size();
        int maxRight=0,maxLeft=0;
        int maxHeight=height[0],index=0;
        int water=0;

        //Max Height
        for(int i=0;i<n;i++){
            if(height[i]>maxHeight){
                maxHeight=height[i];
                index=i;
            }
        }
        //LeftPart of Max height
        for(int i=0;i<index;i++){
            if(maxLeft>height[i]){
                water+=maxLeft-height[i];
            }
            else{
                maxLeft=height[i];
            }
        }
        //Right part of Max height
        for(int i=n-1;i>index;i--){
            if(maxRight>height[i]){
                water+=maxRight-height[i];
            }
            else{
                maxRight=height[i];
            }
        }
        return water;
    }