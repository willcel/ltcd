
#include "TreeNode_lib.h"



int main(){

    Solution a;
    
    // vector<int> res = a.minInterval(var1, var2);
    // printVec(res);
    // vector<int> var1{1,3,2,3,1};
    vector<vector<int>> var2{{1,2,3},{4,5,6},{7,8,9}};

    cout <<  a.minFallingPathSum(var2) << endl;
    // vector<int> mat = a.reversePairs(var1);
    // for(const auto& element: mat){
    //     cout << element << " ";
    // }

    // a.sumOfPower(head);
    // TreeNode* root = construct_binary_tree(vector<int>{1,2,2,3,3,-1,-1,4,4});
    // TreeNode* root = construct_binary_tree(vector<int>{3,9,20,-1,-1,15,7});

    // cout << endl;


    // vector<vector<int>> matrix =  a.findContinuousSequence(15);
    // for (const auto& row : matrix) {
    //     // 遍历当前向量的元素
    //     for (const auto& element : row) {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
