#include <stdio.h>

int stack[100],top=-1,size=100;

void push(int stack[]){
	int x;
	if(top>=size-1)
		printf("Stack overflow\n");	
	else{
		printf("Enter an element to push: ");
		scanf("%d",&x);
		stack[++top]=x;;
	}
}

void pop(int stack[]){
	if(top<0)
		printf("Stack underflow\n");	
	else
		printf("%d\n", stack[top--]);
}

void print(int stack[]){
	int i;
	if(top==-1)
		printf("\nStack is empty!!");
	else
	{
		printf("\nThe stack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}

int main(){
	int flag=1;
	int opt;
	while(flag){
		printf("\nChoose an option (1-push/ 2-pop/ 3-print/ 4-exit): ");		
		scanf("%d",&opt);
		switch(opt){
			case 1:	push(stack);
					break;
			case 2:	pop(stack);
					break;
			case 3: print(stack);
					break;
			case 4: flag=0;
					break;
		}
	}
	
}
