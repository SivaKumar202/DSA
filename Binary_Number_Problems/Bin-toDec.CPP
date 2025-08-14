#include<iostream>
using namespace std;

int BinToDec(int num){
    int ans = 0, Pow = 1;
    while (num > 0)
    {
        int rem = num%10;
        ans += rem*Pow;
        num/=10;
        Pow *=2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<BinToDec(n)<<endl;
}