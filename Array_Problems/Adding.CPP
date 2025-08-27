
#include <bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int> &arr) {

  
    int carry = 1;

    for(int i = arr.size() - 1; i >= 0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
    }

    if(carry) {
        arr.insert(arr.begin(), carry);
    }

    return arr;
}

int main() {
    vector<int> arr = {9, 9, 9};
    vector<int> res = addOne(arr);
    for(auto i:res) {
        cout << i;
    }
    return 0;
}