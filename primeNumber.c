#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

bool check_Prime(int num){
	int i=num;
	if(num==1)
		return 1;
	if(num==2)
		return 1;

	if(num%2==0)
		return 0;
	if(num==3)
		return 1;
	else{
		for(i=3;i<=(int)sqrt(num)+1;i+=2){
			if(num%i==0){
				return 0;
				
			}
			if(i>=(int)sqrt(num))
				return 1;

		}
	}
	return 0;
}

int main(){
	int start,end;

	printf("enter the number start:- ");
	scanf("%d",&start);
	printf("enter the number end:- ");
	scanf("%d",&end);

	int i;
	for(i=start;i<=end;i++){
		if(check_Prime(i))
			printf("%d\n",i);
	}
return 0;
}

