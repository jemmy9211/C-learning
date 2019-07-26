#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<cstdio>
#include<stdio.h>  
using namespace std;
int main(){
	cout <<"hello my new day !!"<< endl;
	//複習大計畫
	//迴圈
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	int n=10;
	while(n--){
		cout<<"%";
	}
	//條件判斷
	int a;
	cin>>a;
	if(a>10){
		cout<<"a>10"<<endl;
	}else{
		cout<<"a<=10"<<endl;
	}
	string s,s1;
	while(getline(cin,s)){
		istringstream iss(s);
		int m,t=0;
		while(iss>>n){
			t+=1;
		}
		cout<<t<<endl;
	}

	return 0;
}
int n;
double m;
scanf("%d",%n);
printf("%.6f\n",m);
#include<string.h>
memset(a,0,sizeof(a));

int i=1,j;
j=i++;
j=++i;//both i=2,but (1)j=1 (2)j=2 






