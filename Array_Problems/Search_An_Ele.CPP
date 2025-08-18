#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n>>x;
	bool element = false;
	for(int i=0; i<n; i++ ){
	    int num; cin>>num;
	    if(num == x){
	        element = true;
	    }
	}
	if(element == true){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}

}
