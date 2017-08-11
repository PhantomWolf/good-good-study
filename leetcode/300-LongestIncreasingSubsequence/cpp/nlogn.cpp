#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int binary_search(int tail[], int l, int r, int target) {
        while (l <= r) {
            int m = (l + r) / 2;
            cout << "l: " << l << ", r: " << r << ", m: " << m << endl;
            if (tail[m] > target)
                r = m - 1;
            else if (tail[m] < target)
                l = m + 1;
            else
                return m - 1;
        }
        return r;
    }

    int lengthOfLIS(vector<int>& nums) {
        int nums_len = nums.size();
        if (nums_len == 0)
            return 0;

        int length = 1;
        int tail[nums_len] = {0};
        tail[0] = nums[0];
        for (int i = 1; i < nums_len; ++i) {
            if (nums[i] < tail[0])
                tail[0] = nums[i];
            else if (nums[i] > tail[length - 1])
                tail[length++] = nums[i];
            else {
                int ceil = binary_search(tail, 0, length - 1, nums[i]);
                if (ceil > 0)
                    tail[ceil] = nums[i];
            }
        }
        return length;
    }
};


int main()
{
    //vector<int> nums{2, 5, 3, 7, 11, 8, 10, 13, 6};
    //vector<int> nums{2, 2};
    vector<int> nums{10,9,2,5,3,4};
    Solution s;

    int res = s.lengthOfLIS(nums);
    cout << "length: " << res << endl;

    return 0;
}
