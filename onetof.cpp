#include<iostream>
#include<string>
using namespace std;
int main()
{
	char c[50]={'1','2','3','4','\0'};
	
	for(int i=0;c[i]!='\0';i++){
		cout<<c[i];
	}
}