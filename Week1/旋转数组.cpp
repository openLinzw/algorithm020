/*
1.题目要求空间复杂度只能为O（1）,那么不能使用缓存交换；
2.循环暴力求解(以下不是最优解)
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();

        for(int i = 0;i < k;i++)
        {
            for(int j = 1; j < size;j++)
            {
                int tmp = nums[j];
                nums[j] = nums[0];
                nums[0] = tmp;
            }
        }      
    }
};