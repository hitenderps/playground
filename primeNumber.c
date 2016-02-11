#include<stdio.h>

main() {


	int T,j,i;
	int M,N;
	
	scanf("%d",&T);
	while(T--) {
		
		scanf("%d %d",&M,&N);
		
		for(i=M;i<=N;i++) {
		   if(i==1)
			continue;
		   if(i%2==0)
		       continue;
		   if(i==3){
			printf("%d\n",i);
			continue;
		   }
		    else {
			for(j=2;j<=i/2;j+=2){
			    if(i%j!=0)
			        continue;
			    else
				break;
			}
		        if(j>=i/2)
			    printf("%d\n",i);
		   }
		}
        }
}
