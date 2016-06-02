#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double cost;
    int tip;
    int tax;
    cin>>cost;
    cin>>tip;
    cin>>tax;
    cout<<"The total meal cost is "<<int(cost*(1+tip/100.0+tax/100.0)+0.5)<<" dollars."<<endl;
    return 0;
    return 0;
}
