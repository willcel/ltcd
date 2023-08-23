
#include "TreeNode_lib.h"

// 1. 在s中，对indices遍历，从indice[i]开始检查是否等于sources
//     如果有不同，
//         建立一个恢复字符串数组，把indices[i]到[i+1]的存入。代表结果里有他
//         continue
//     如果全相同，
//         把target[i] push近结果数组

// 2. 字符串数组拼接成一个


class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        // vector<string> store;
        // sort(indices.begin(), indices.end());
        vector<int> index(indices.size());
        iota(index.begin(), index.end(),0);
        sort(index.begin(), index.end(), [&indices](int i, int j){return indices[i]<indices[j];});
        
        string res = "";
        for(int j=0; j<indices.size(); j++){
            int i = index[j];
            if(j==0 && indices[i]!=0){
                res += s.substr(0, indices[i]);
            }
            int idx = indices[i];
            int edx = j != indices.size()-1 ? indices[index[j+1]]-1 : s.size()-1;

            int l = sources[i].size();
            string s2 = s.substr(idx, l);

            if( s2.compare(sources[i]) == 0){
                // store.push_back(targets[i]);
                res += targets[i];
                res += s.substr(idx+l, edx-(idx+l)+1);
            }else{
                // store.push_back(s.substr(idx, edx-idx+1));
                res += s.substr(idx, edx-idx+1);
            }

        }
        return res;
    }
};



int main(){

    Solution a;
    
    // vector<int> res = a.minInterval(var1, var2);
    // printVec(res);
    // vector<int> var1{1,3,2,3,1};
    // vector<vector<int>> var2{{1,2,3},{4,5,6},{7,8,9}};
    string s="vmokgggqzp";
    vector<int> indices{3,5,1};
    vector<string> sources{"kg","ggq","mo"};
    vector<string> targets{"s","so","bfr"};

    cout <<  a.findReplaceString(s, indices, sources, targets) << endl;
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
