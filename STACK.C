#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 10
struct stack {
	int item[MAX];
	int top;
	     }st;

int isempty(st *s){
	if(s=>top==-1){
	   return 1;
}
	else{
	   return 0;
}
}
void create_empty_stack(st *s){
	s=>top==-1;
	}
int isfull(st *s){
		if(s=>topp==MAX-1)
			return 1;
		else
			return 0;
}
void push(){
int item;
if (top=MAX-1){
	printf("stack overflow");
}
	else
	       {	printf("enter the elements to insert");
	       top=top+1;
	    st.[top]=item;
}
void pop(){
	int item;
	if(top<1){
		printf("stack is empty");
}
	else{

		item=st.[top];
		top=top-1;
		printf("the popped item is%d",item);
}





