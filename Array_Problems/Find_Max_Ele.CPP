#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int max=0;
	    int arr;
	    while(n--){
	        cin>>arr;
	        if(arr>max){
	            max = arr;
	        }
	    }
	    cout<<max<<endl;
	}

}
