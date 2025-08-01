#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;


        bool contious = false;
        int total = 0;

        for(int i = 0; i<n;i++){
            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
                contious = true;
                break;
            }
            if(s[i] == '.'){
                total++;
            }
        }

        if(contious){
            cout << 2 << endl;
        }
        else{
            cout << total << endl;
        }
    }
    return 0;
}