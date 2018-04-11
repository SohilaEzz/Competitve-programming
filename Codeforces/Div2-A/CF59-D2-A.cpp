#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<cctype>

using namespace std;
 
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(){
    fast();
    int  up=0,lo=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
 
		if(s[i]>='a'&&s[i]<='z'){
			lo++;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
		    up++;
		}

	}
	 if(lo<up){
		 for(int i=0;i<s.size();i++){
			 s[i] = toupper(s[i]);  
		 }
	 } 
	else{
		for(int i=0;i<s.size();i++){
			s[i] = tolower(s[i]);
		}
	}
 
 
	cout<<s<<endl;
  
    return 0;
}
