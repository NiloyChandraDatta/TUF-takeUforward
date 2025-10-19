// https://takeuforward.org/plus/dsa/problems/second-largest-element

class Solution
{
public:
    int secondLargestElement(vector<int>& nums)
    {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        if (nums.size() < 2)
        {
            return -1;
        }

        for (int x : nums)
        {
            if (x > largest)
            {
                secondLargest = largest;
                largest = x;
            }
            else if (x > secondLargest && x < largest)
            {
                secondLargest = x;
            }
        }

        if (secondLargest == INT_MIN)
        {
            return -1;
        }
        
        return secondLargest;
    }
};
