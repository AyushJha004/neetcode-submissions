class Solution {
public:
        // brute force
        //we will find the max on the left and max on the right for each element 
        // then just keep subtracting height[i] from that min of left max and right max
        /*int left( vector<int>& height , int curr){
            int lmax = height[0];
            for(int i = 1 ; i <= curr ; i++){
                lmax = max(lmax , height[i]);
            }
            return lmax;
        }
        int right( vector<int>& height , int curr){
            int rmax = height[height.size()-1];
            for(int i = height.size()-2 ; i >= curr ; i--){
                rmax = max(rmax , height[i+1]);
            }
            return rmax;
        }
    int trap(vector<int>& height) {
        int total = 0 ;
        for(int i = 0 ; i < height.size(); i++){
            if(height[i] < left(height , i) && height[i] < right(height , i)){
                total += min(left(height ,i ) , right(height , i)) - height[i];
            }
        }
        return total;
        
    }*/

    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0 ;
        int right = n-1;
        int lmax = 0 ;
        int rmax = 0;
        int total = 0;
        while(left < right){
            if(height[left] <= height[right]){
                if(height[left] < lmax){
                    total += lmax - height[left];
                    left++;
                }
                else{
                    lmax = height[left];
                    left++;
                }
            }
            else{
                if(height[right] < rmax){
                    total += rmax - height[right];
                    right--;
                }
                else{
                    rmax = height[right];
                    right--;
                }
            }
        }
        return total;
    }
};