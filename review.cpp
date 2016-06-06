#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    string S[N];
    int n;
    cin.ignore();
    for(n=0;n<N;n++){
        getline(cin, S[n]);
    }
    
    int j = 0;
    for(n=0;n<N;n++){
        for(j=0;j<int(S[n].size()/2.0+0.5);j++){
            cout << S[n][2*j];
        }
        cout << " ";
        for(j=0;j<int(S[n].size()/2.0);j++){
            cout << S[n][2*j+1];
        }
        cout << endl;
    }
    
    return 0;
}
