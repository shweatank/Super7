#include<stdio.h>
typedef struct data{
int a :8;
int b :2;
int c :3;
int d :19;
}data;
unsigned char dataop(int bit_no,int data){
     unsigned char *a;
     for(int *i=0;i<bit_no;i++){
      
}
        
}
void main(){
data a;
a.a=10;
a.b=1;
a.c=3;
a.d=3456;

printf("%d\n",sizeof(a));
printf("%d\n",a.a);
printf("%d\n",a.b);
printf("%d\n",a.c);
printf("%d\n",a.d);
}
