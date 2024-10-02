

// Problem Link :https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            int left = 0;
            int right = n - 1;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (grid[i][mid] < 0)
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            count += n - left;
        }
        return count;
    }
};