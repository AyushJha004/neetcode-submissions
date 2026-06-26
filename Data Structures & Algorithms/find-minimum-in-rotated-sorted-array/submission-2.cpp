/*class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0,high = nums.size()-1;
        int ans = INT_MAX;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[low]<= nums[high]){
                ans = min(ans,nums[low]);
                low = mid +1;
            }
            else{
                high = mid-1;
                ans = min(ans,nums[mid]);
            }
        }
        return ans;
    }
};*/

/*class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;

        while(low <= high)
        {
            // Entire range sorted
            if(nums[low] <= nums[high])
            {
                ans = min(ans, nums[low]);
                break;
            }

            int mid = low + (high - low) / 2;

            // Left half sorted
            if(nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }

            // Right half sorted
            else
            {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(), nums.end());
    }
};