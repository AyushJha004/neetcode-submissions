class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                for (int k = j + 1; k < nums.size(); k++) {

                    if (nums[i] + nums[j] + nums[k] == 0) {

                        vector<int> triplet = {
                            nums[i],
                            nums[j],
                            nums[k]
                        };

                        sort(triplet.begin(), triplet.end());

                        bool found = false;

                        for (auto existingTriplet : ans) {

                            if (existingTriplet == triplet) {

                                found = true;
                                break;
                            }
                        }

                        if (!found) {

                            ans.push_back(triplet);
                        }
                    }
                }
            }
        }

        return ans;
    }
};