#include<iostream>
using namespace std;

int main(){	
	int t;

	cin>>t;
	while(t--){
	    string b;
	    int flag=0;
		cin>>b;
		
		for(int i=0;i<b.length();i++){
			if(b[i]=='1' && (b[i+1]=='1'||b[i+1]=='0')){
				flag=1;
				cout<<"Yes\n";
				break;								
			}		
		}
		if(flag==0){
			cout<<"No\n";
		}
	}
		
	return 0;	
}


