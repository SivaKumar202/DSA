#include<iostream>
using namespace std;

int BinDec(int num){
    int ans = 0, Pow = 1;
    while(num >0){
        int rem = num%2;
        num /=2;
        ans += (rem*Pow);
        Pow *= 10;
    }
    return ans;
}

int main(){
    int n; cin>> n;
    cout<<BinDec(n)<<endl;
}