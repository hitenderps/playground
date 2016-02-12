#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
int TOP;
char stack[MAX];

void push(char item) {
    if(TOP==MAX-1)
        printf("overflow");
    if(TOP==-1) {
       TOP=TOP+1;
       stack[TOP]=item;
     }
    else{
    TOP=TOP+1;
    stack[TOP]=item;}
   
}
 
void pop() {
   if(TOP==-1)
      printf("empty");
   char top=stack[TOP];
    TOP=TOP-1;
}
 
main() {
   
    char *str;
    str=(char *)malloc(20);
    TOP=-1;
    printf("enter the expression   ");
   int i;   
    scanf("%s",str);
    printf("%s\n",str);
    if(strlen(str)==1)
	printf("irregular");

    else {
    for(i=0;i<strlen(str);i++) {
       if(str[i]=='[' || str[i]=='{' || str[i]=='(') {
            push(str[i]);
           printf("%c %d\n",stack[TOP],TOP);
        }   
        else if(str[i]==']') {
            if(stack[TOP]=='[') {
            
                 pop();
           printf("%c\n",stack[TOP]);

        }
          else{
              printf("irregular");
              break;
           }
         }
       else if(str[i]=='}'){
	    if(stack[TOP]=='{') {
               pop();
            printf("%c\n",stack[TOP]);
           
       }
       else {
          printf("irregular");
          break;
	  }
        }
       else if(str[i]==')') {
	    if(stack[TOP]=='('){ 
	         pop();
             printf("%c\n",stack[TOP]);

        }
          else {
             printf("irregular");
             break;
          }
	}
     
 
     }
   
     if(TOP==-1)
        printf("expression is regualr");
   }
} 
            
	    


