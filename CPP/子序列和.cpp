#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	long long int n,m;
	while(scanf("%lld %lld",&n,&m)){
		if(n==0&&m==0) break;
		double t=0;
		for(int i=n;i<=m;i++){
			t=t+(1.0/(i*i));
		}
		printf("%.5f\n",t);
	}
	return 0;
}

