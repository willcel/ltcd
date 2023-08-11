#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //对数组进行操作
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        //把0移动到末尾
        for(int i=0,j=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};

int main(){
    Solution a;
    vector<int> testin = {1,2,2,1,1,0};
    vector<int> res = a.applyOperations(testin);

    for(int i = 0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    printf("\n---");
    // printf("Hello world\n");
    return 0;
}
