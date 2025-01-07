#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }

        int count=0;
        for(auto &el: mp){
            count+=el.second/2;
        }

        cout<<count<<endl;
    }

    return 0;
}