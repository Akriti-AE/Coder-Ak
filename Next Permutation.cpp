class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int break_pt = -1;

        // Step 1: Find the break point in left-to-right order
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                break_pt = i;
            }
        }

        // Step 2: If no break point, reverse to get the smallest permutation
        if (break_pt == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the smallest element larger than nums[break_pt] in left-to-right order
        int sn = -1;
        for (int i = break_pt + 1; i < n; i++) {
            if (nums[i] > nums[break_pt]) {
                if (sn == -1 || nums[i] <= nums[sn]) {
                    sn = i;
                }
            }
        }

        // Step 4: Swap the elements at break_pt and sn
        swap(nums[break_pt], nums[sn]);

        // Step 5: Reverse the suffix starting at break_pt + 1
        reverse(nums.begin() + break_pt + 1, nums.end());
    }
};
