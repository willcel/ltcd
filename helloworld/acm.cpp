#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    vector<int> nums;
    
    while(cin>>N){
        while(N--){
            cin >> M;
            nums.resize(M);
            
            int sum=0;
            for(int i =0; i<M; i++){
                cin >> nums[i];
                sum += nums[i];
            }
            
            cout << sum << endl ;
            if(N!=0) cout << endl;
        }
    }
    

    return 0;
}