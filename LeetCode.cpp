class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result;

        int n = candies.size();

        int largest = candies[0];

        for (int i = 0; i < n; i++)
        {
            if (candies[i] > largest)
            {
                largest = candies[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (candies[i] + extraCandies >= largest)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }

        return result;
    }
};