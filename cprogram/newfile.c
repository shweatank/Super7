#include<stdio.h>
#include<string.h>

void main(){
 char str[14]="tejsawbhasker";
  printf("the original string %s\n",str);
  for(int i =0;i<7;i++){
   char a=str[i];
   str[i]=str[14-1-i];
    str[14-1-i]=a;

}
printf("%s\n",str);
}
