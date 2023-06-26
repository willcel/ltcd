#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    // int bfs(int i,int j)
    // {
    //     return i-j;
    // }

    int flipChess(vector<string>& chessboard) {
        int m = chessboard.size();
        int n = chessboard[0].size();

        auto bfs = [&](int i, int j) -> int {
            return i-j;
        };

        int res = bfs(m,n);
        return res;
    }
};

int main(){

    Solution a;
    vector<string> chess = {"....X.","....X.","XOOO..","......","......"};
    // int res = a.flipChess(chess);
    // cout<< res;
    // cout<< endl;

    int size = 5;
    int arr[size] = {};
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }



    return 0;
}