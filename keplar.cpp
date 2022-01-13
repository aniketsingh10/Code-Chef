#include<iostream>
using namespace std;

int main(){
	int n;
	float t1,t2,r1,r2,sum1,sum2;
	cin>>n;
	
	while(n--){
		cin>>t1>>t2>>r1>>r2;
		
		sum1=t1*t1*r2*r2*r2;
		sum2=t2*t2*r1*r1*r1;
		
		if(sum1==sum2){
			cout<<"Yes";
		}
		else{
			cout<<"No";	
		}		
	}		
}
