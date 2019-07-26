#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	unsigned int seed=(unsigned int)time(NULL);
	srand(seed);
	while(1){
		int n=rand(),a,b;
		cout<<"請輸入要產生的亂數範圍:";
		cin>>a>>b;
		cout<<a+n%(b-a+1)<<endl;
	}
	return 0;
}

