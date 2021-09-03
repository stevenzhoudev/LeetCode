//设计一个算法，找出数组中最小的k个数。以任意顺序返回这k个数均可。 
//
// 示例： 
//
// 输入： arr = [1,3,5,7,2,4,6,8], k = 4
//输出： [1,2,3,4]
// 
//
// 提示： 
//
// 
// 0 <= len(arr) <= 100000 
// 0 <= k <= min(100000, len(arr)) 
// 
// Related Topics 数组 分治 快速选择 排序 堆（优先队列） 
// 👍 95 👎 0


#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {
        vector<int> resVec;
        sort(arr.begin(), arr.end());
        int i = 0;
        for (auto pos : arr) {
            if (k == i) {
                break;
            }
            resVec.push_back(pos);
            ++i;
        }
        return resVec;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> arr{7, 1, 5, 3, 6, 4};
    vector<int> res = s.smallestK(arr, 0);
    //vector<int> ans = s.twoSum(data,11);
    //cout << ans[0]<<ans[1]<<endl;
    cout<<"Hello LeetCode"<<endl;
}