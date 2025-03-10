#include<stdio.h>
void main(){
int l,c=0;
scanf("%d",&l);
 int num=l;
while(num!=0){
	int r=num%10;
	c=c*10+r;
	num=num/10;
}
if(c==l)
printf("Palindrone");
else 
printf("Not a palindrone");

}
