#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <climits>
#include <unordered_map>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* construct_listnode(const vector<int>& vec){
    ListNode* head = new ListNode(vec[0]);
    ListNode* cur = head;
    for(int i = 1; i<vec.size(); i++){
        ListNode* temp = new ListNode(vec[i]);
        cur->next = temp;
        cur = temp;
    }
    return head;
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* construct_binary_tree(const vector<int>& vec) {
    vector<TreeNode*> vecTree (vec.size(), NULL);
    TreeNode* root = NULL;
    for (int i = 0; i < vec.size(); i++) {
        TreeNode* node = NULL;
        if (vec[i] != -1) node = new TreeNode(vec[i]);
        vecTree[i] = node;
        if (i == 0) root = node;
    }
    for (int i = 0; i * 2 + 1 < vec.size(); i++) {
        if (vecTree[i] != NULL) {
            vecTree[i]->left = vecTree[i * 2 + 1];
            if(i * 2 + 2 < vec.size())
            vecTree[i]->right = vecTree[i * 2 + 2];
        }
    }
    return root;
}
// 层序打印打印二叉树
void print_binary_tree(TreeNode* root) {
    queue<TreeNode*> que;
    if (root != NULL) que.push(root);
    vector<vector<int>> result;
    while (!que.empty()) {
        int size = que.size();
        vector<int> vec;
        for (int i = 0; i < size; i++) {
            TreeNode* node = que.front();
            que.pop();
            if (node != NULL) {
                vec.push_back(node->val);
                que.push(node->left);
                que.push(node->right);
            }
            // 这里的处理逻辑是为了把null节点打印出来，用-1 表示null
            else vec.push_back(-1);
        }
        result.push_back(vec);
    }
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void printVec(vector<int>& a){
    for(auto& n: a){
        cout << n << " ";
    }
}
    // TreeNode* nodeIn = construct_binary_tree(var1);
    // string data = a.serialize(nodeIn);
    // TreeNode* res = a.deserialize(data);
    // print_binary_tree(res);

// void quickSort(int A[], int low, int high){
//     if(low < high){
//         int pivot = partition(A, low, high);

//         quickSort(A, low, pivot-1);
//         quickSort(A, pivot+1, high);
//     }
// }

// int partition(int A[], int low, int high){
//     int pivot = A[low];
//     while(low < high){
//         while(low < high && A[high] >= pivot) high--;
//         A[low] = A[high];
//         while(low < high && A[low] <= pivot) low++;
//         A[high] = A[low];
//     }
//     A[low] = pivot;
//     return low;
// }