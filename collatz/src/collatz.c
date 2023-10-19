#include <stdio.h>

int main() {

        long long  n1,n2,ma,tma,N;
        ma=0;
        scanf("%lld",&n1);scanf("%lld",&n2);
        if ( n1>0 && n2> 0){
                for(long long i=n1;i<=n2;i++){
                        N=i;
                        tma=1;
                        while(N!=1){
				tma++;
                                if(N%2==0)
                                      	N=N/2; 
                                else
                                        N=3*N+1;
                        }
                        if(tma>ma)
                                ma=tma;
                }
                printf("%lld\n",ma);
        }
        else
                printf("0\n");

return 0;
}
