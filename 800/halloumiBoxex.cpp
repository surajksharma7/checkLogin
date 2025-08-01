#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    int k,n;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>copy_a = a;

        sort(a.begin(), a.end());

        if(a == copy_a || k > 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}