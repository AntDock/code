// Created on 张哲涵的iPad.
// Key:  Float类型和setprecision的使用

#include <bits/stdc++.h>
using namespace std;

int main() {
    float kwh,pay;
    cin>>kwh;
    if(kwh>=401)
    {
        pay=(150*0.4463)+(250*0.4663)+(kwh-400)*0.5663;
    }
    else if(kwh>=151)
    {
        pay=(150*0.4463)+(kwh-150)*0.4663;
    }
    else
    {
        pay=kwh*0.4463;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<pay;
    return 0;
}