#include <iostream>
#include <stack>
using namespace std;

string reverse(string s) {
    stack<char> st;
    
    for (char c : s)
        st.push(c);
    
    string res;
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    string s = "geeksforgeeks";
    cout << s << endl;
    cout << reverse(s) << endl;
    return 0;
}