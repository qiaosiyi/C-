#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> my_Map; 
    int N;
    cin >> N;
    string S[N];
    int num[N];
    int i=0;
    for(i=0;i<N;i++){
        cin >> S[i];
        cin >> num[i];
        my_Map[S[i]] = num[i]; 
    }
    i = 0;
    while(cin >> S[i]){
        if(my_Map.count(S[i])>0){
            cout <<S[i]<<"="<< my_Map[S[i]]<<endl;
        }else if(my_Map.count(S[i])==0){
            cout << "Not found" <<endl;
        }
    }

    return 0;
}
