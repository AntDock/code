// Created on 张哲涵的iPad.
// Key: 没啥

#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    c=0;
    for(int i=1;i<=7;i++)
    {
        cin>>a>>b;
        if(a+b>c)
        {
            c=a+b;
            d=i;
        }
    }
    cout<<d;
    return 0;
}