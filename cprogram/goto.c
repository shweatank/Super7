#include<stdio.h>
void checkEven(int num)
{
	if (num%2==0)
		goto even;
	else
	goto odd;
even:
	printf("%d is even",num);
	return;
odd:
	printf("%d is odd ",num);
}
 void print()
{int n=0;
 count:
	if (n<10){ 
	printf("%d",n);
	n++;
	goto count; 
	}
	else
	return;
}
int main()
{
	int num =26;
	checkEven(num);
	print();
	return 0;
}
