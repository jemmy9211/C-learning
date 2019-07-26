#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int s,q,w;
        scanf("%d",&s);
        int a[s];
        for(int i=0;i<s;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+s);
        scanf("%d",&q);
        while(q--){
            int d=0;
            scanf("%d",&w);
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++){
                    if(i==s-1 && j==s-1){
                        if(a[i]+a[j]!=w){
                            d=2;
                            break;
                        }else{
                            printf("Good!\n");
                            d=1;
                            break;
                        }
                    }
                   if(a[i]>=w){
                        d=2;
                        break;
                   }else{
                        if(j!=i){
                            if(a[i]!=0 && a[j]!=0){
                                if(a[i]+a[j]==w){
                                    printf("Good!\n");
                                    d=1;
                                    break;
                                }
                            }
                        }
                   }
                }
                if(d==1){
                    break;
                }else if(d==2){
                    printf("So Bad!\n");
                    break;
                }
            }
        }
    }

    return 0;
}
