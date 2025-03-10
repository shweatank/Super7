#include<stdio.h>
int main(){
char ch;
int a,b;
scanf("%c",&ch);
scanf("%d",&a);
scanf("%d",&b);
switch(ch){
	case '+':
	printf("%d\n",a+b);
	break;
	case '-':
	printf("%d\n",a-b);
	break;
	case '*':
	printf("%d\n",a*b);
	break;
	case '/':
	{
	if(b==0)
	break;
	else{
	printf("%d\n",a/b);
	break;
		} 
	}
	default:
	printf("Invalid Input\n");
	break;
}	
}
