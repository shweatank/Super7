#include<stdio.h>
void main(){
    int w;
    scanf("%d",&w);
    while(w--){
        int n ;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int result=0;int t=1;
        while(t){
            for(int i =0;i<n;i++){
                int c=a[i];
                for(int j =0;j<n;j++){
                    if (c==a[j]) continue;
                    else
                    result=result^a[j];
                }
              if(c==result){
              printf("%d",result);t=0;}
            }
        }
        
    }
}
