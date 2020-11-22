//写出所有解法的可能
//1.暴力求解，两个for循环
//2.通过第二个数组来缓存对比
//=======================
//注意题目传入的是有序的数组，有序证明其的左右重复的话必定是相同的
//题目要求的是空间复杂度，而非时间复杂度

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int i = 0;
        for(int j = 0;j < nums.size();j++)
        {
            if(nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }
};