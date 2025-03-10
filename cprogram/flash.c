#include<stdio.h>
#include<stdint.h>
#include<unistd.h>
typedef struct{
 int i; 
 char c; 
 char a;
}l;
int main(){
	l a;
  unsigned char*b=(unsigned char*)&a;
   a.i=0;
   *b=23;
   b=b+1;
   *b=0x1;
   b=b+3;
   *b='a';
   b=b+1;
   *b='A';
   printf("%d",a.i);
   printf("%c\n",a.c);
   printf("%c\n",a.a);
}
