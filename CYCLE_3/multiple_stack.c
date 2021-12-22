#include <stdio.h>

int stack[100],top1=-1,size=100;
int top2 = 100;

void push1(int stack[]){
	int x;
	if(top1>=top2)
		printf("Stack overflow\n");	
	else{
		printf("Enter an element to push to first stack: ");
		scanf("%d",&x);
		stack[++top1]=x;;
	}
}

void pop1(int stack[]){
	if(top1<0)
		printf("Stack underflow\n");	
	else
		printf("%d\n", stack[top1--]);
}

void push2(int stack[]){
	int x;
	if(top1>=top2)
		printf("Stack overflow\n");	
	else{
		printf("Enter an element to push to second stack: ");
		scanf("%d",&x);
		stack[--top2]=x;
	}
}

void pop2(int stack[]){
	if(top2>size-1)
		printf("Stack underflow\n");	
	else
		printf("%d\n", stack[top2++]);
}

int main(){
	int flag=1;
	int opt;
	while(flag){
		printf("\nChoose an option:\n\t1- Push to stack1\n\t2- Push to stack2\n\t3- Pop stack1\n\t4- Pop stack2\n\t5- Exit\n\nOption: ");		
		scanf("%d",&opt);
		switch(opt){
			case 1:	push1(stack);
					break;
			case 2:	push2(stack);
					break;
			case 3: pop1(stack);
					break;
			case 4: pop2(stack);
					break;
			case 5: flag=0;
					break;
		}
	}
}
