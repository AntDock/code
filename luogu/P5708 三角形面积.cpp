// Created on 张哲涵的iPad.
// Key: sqrt() 函数, double 和 float 的区别

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    double ans=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<ans;
    return 0;
}