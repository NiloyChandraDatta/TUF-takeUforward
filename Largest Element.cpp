// https://takeuforward.org/plus/dsa/problems/largest-element

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int largestElement(vector<int>& nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int m = nums[0];
        for (int x : nums)
        {
            if (x > m)
            {
                m = x;
            }
        }
        return m;
    }
};
