#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	long n;
	long c=0;
		
	while(testcase--){
		int d;
	cin>>n>>d;
	
		if(d<=10){
			c=pow(2,d);
			if(c>n){
				cout<<n<<"\n";
			}
			else
				cout<<c<<"\n";	
		}	
		else if(d>10 && d<=20){
			int s=d-10;
			long long int ca;
			ca=1024*pow(3,s);
			if(ca>n){
				cout<<n<<"\n";
			}
			else
				cout<<ca<<"\n";
		}
		else
			cout<<n<<"\n";
					
  	}	
}
