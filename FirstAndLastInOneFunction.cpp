class Solution
{
public:
    int search(vector<int> &nums, int target, bool check)
    {
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {

            int mid = start + (end - start) / 2;

            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                if (check)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> answer;

        int first = search(nums, target, true);
        int last = search(nums, target, false);

        answer.push_back(first);
        answer.push_back(last);

        return answer;
    }
};