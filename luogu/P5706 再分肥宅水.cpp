// Created on 张哲涵的iPad.
// Key：取指定小数位数

#include <bits/stdc++.h>
using namespace std;
int main() {
    double t;
    int n;
    cin>>t>>n;
    t=t/n;
    n=n*2;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<t<<endl;//三位小数
    cout<<n;
    return 0;
            }