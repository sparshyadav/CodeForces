#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int level=0;
    int required=1;
    while(n>=required){
        n-=required;
        level++;
        required+=(level+1);
    }

    cout<<level;
}