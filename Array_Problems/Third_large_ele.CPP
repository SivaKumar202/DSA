#include <bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int> &arr) {
    int n = arr.size();
    
    sort(arr.begin(), arr.end());

    return arr[n-3];
}

int main() {
    vector<int> arr = {1, 14, 2, 16, 10, 20};
    cout << thirdLargest(arr) << endl;

    return 0;
}