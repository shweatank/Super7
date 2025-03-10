#include <stdio.h>

int main() {
   int T,L,R;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&L);
        scanf("%d",&R);
        int a[R];int r=0;int index=0;
        
        for(int i =L;i<=R;i++)
        {
            a[r]=i;
            r++;  
        }
            for(int j=0;j<=r;j++){
                for(int k=0;k<=r;k++){
                index++;            
        }
    }
printf("%d\n",index/R);
}
}

