class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int ans = nums.size();
        int start = 0;
        int end = ans - 1;

        while (start <= end)
        {

            int mid = start + (end - start) / 2;

            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = search(nums, target);
        int last = search(nums, target + 1) - 1;

        if (first > last)
        {
            return {-1, -1};
        }
        else
        {
            return {first, last};
        }
    }
};