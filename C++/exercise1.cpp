#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int indexX = 0;
        for (int x : nums)
        {
            int indexY = 0;
            for (int y : nums)
            {
                if (x + y == target && indexX != indexY)
                {
                    return {indexX, indexY};
                }
                ++indexY;
            }
            ++indexX;
        }
        return {};
    }
};

int main()
{
    Solution solution;

    std::vector<int> nums = {3, 2, 4};
    int target = 6;

    std::vector<int> results = solution.twoSum(nums, target);

    for (int result : results)
    {
        std::cout << result << std::endl;
    }
    return 0;
}