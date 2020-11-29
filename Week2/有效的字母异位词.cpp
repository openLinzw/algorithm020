#include <iostream>

using namespace std;

//假设都是小写字母
//长度不等，return false
//1.排序
//2.哈希表

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
};

int main()
{
    int ret = 0;

    return ret;
}