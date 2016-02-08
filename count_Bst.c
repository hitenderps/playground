#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]) {
	
    int N=atoi(argv[1]);
    int i,j;

    int T[100000];
    T[0]=1;
    T[1]=1;
int a;

    for(i=2;i<=N;i++) {
        a=0;
        for(j=0;j<i;j++){
	     a+=T[j]*T[i-j-1];
        }
       T[i]=a;
     }

    printf("%d\n",T[N]);
    
}
   
