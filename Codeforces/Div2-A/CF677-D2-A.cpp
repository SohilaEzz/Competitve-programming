#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
 
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
int a[2000];
int main(){
	int n,h,c=0;
	cin>>n>>h;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>h)
			c+=2;
		else
			c+=1;
	}
		cout<<c<<endl;
	



    return 0;
}
