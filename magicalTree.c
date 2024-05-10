#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n, st=1;
    scanf("%d",&n);
    int len=((5*2+n)/2)+1;
    // printf("%d\n",len);
    int sp=len-1;
    //upper tree
    for(int i=1; i<=len; i++){
        for(int j=1; j<=sp; j++){
            printf(" ");
        }
        for(int j=1; j<=st; j++){
            printf("*");
        }
        sp--;
        st+=2;
        printf("\n");
     }
     //print down tree
     int space=5;
     for(int i=1; i<=5; i++){
        //print space
        for(int j=1; j<=space; j++){
            printf(" ");
        }

        for(int j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
     }
    return 0;
}