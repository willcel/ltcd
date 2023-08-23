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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
//     string tmp;
    vector<string> str;
    while(cin >> n){
        str.resize(n);
        for(int i=0; i<n; i++){
            cin >> str[i];
        }
        sort(str.begin(), str.end());
        
        for(int i=0; i<n-1; i++){
            cout << str[i] << " ";
        } cout << str[n-1];
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

char changeChar(char &a){
    if(a<='z' && a >= 'a'){
        a-=32;
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    string tmp;
    while(n--){
        getline(cin, tmp);
        int N = tmp.size();
        
        cout.put(changeChar(tmp[0]));
        for(int i=0; i<N-1; i++){
            if(tmp[i] == ' ' && tmp[i+1] != ' '){
                cout.put(changeChar(tmp[i+1]));
            }
        }
        cout << endl;
    }
}