/*ربى اصلح لى شأنى*/
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
int main(){
    fast();
   string s;
   getline(cin,s);
   sort (s.begin(),s.end());
	   int c=0;
   for(int i=0;i<s.size();i++){
	   if(s[i]>='a'&&s[i]<='z')
	   if(s[i]!=s[i+1])
		   c++;
   }
   cout<<c<<endl;

    return 0;
}
//  عاند الحياة وابتسم^_^  
