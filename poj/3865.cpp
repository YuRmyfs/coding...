#include <iostream>
// #include <vector>
#include <cstring>
using namespace std;
/*class smp{
public:
	int a,b,c,d;
	smp(int e,int f,int g,int h):a(e),b(f),c(g),d(h){}
};*/
typedef char ch[100];
int main(){
	int a,b;
//	vector<smp> s;
	cin>>a>>b;
	ch **t=new ch*[a];
	for(int i=0;i<a;i++)
		t[i]=new ch[b];

	for(int i=0;i<a;i++){
		for(int j=0;j<b-1;j++){
			cin.getline(t[i][j],100,',');
		}
		cin>>t[i][b-1];
	}
/*	for(int j=0;j<b;j++){
		for(int i=0;i<a-1;i++){
			for(int k=i+1;k<a;k++){
				if(strcmp(t[i][j],t[k][j])==0){
					for(int d=0;d<s.size();d++){
						if(i==s[d].a && k == s[d].c){
							cout<<"NO"<<endl;
							cout<<i+1<<" "<<k+1<<endl;
							cout<<s[d].d+1<<" "<<j+1<<endl;
							return 0;
						}
					}
					s.push_back(smp(i,j,k,j));
				}
			}
		}
	}*/
	for(int i=0;i<a-1;i++){
		for(int k=i+1;k<a;k++){
			int flag=-1;
			for(int j=0;j<b;j++){
				if(strcmp(t[i][j],t[k][j])==0){
					if(flag==-1) flag=j;
					else{
						cout<<"NO"<<endl;
						cout<<i+1<<" "<<k+1<<endl;
						cout<<flag+1<<" "<<j+1<<endl;
						return 0;
					}
				}
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
