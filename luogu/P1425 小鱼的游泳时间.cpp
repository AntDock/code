// Created on 张哲涵的iPad.
// Key: 还是没啥重点，就是玩儿

#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=(60*c+d)-(60*a+b);
    cout<<ans/60<<" "<<ans%60;
    return 0;
}