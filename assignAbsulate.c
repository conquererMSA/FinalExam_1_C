#include<stdio.h>
int main(){
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
        int len;
    scanf("%d",&len);
    int a[len], b[len], c[len];
    int j=len-1;
    for(int i=0; i<len; i++){
        scanf("%d",&a[i]);
        b[j]=a[i];
        j--;
    }
    for(int i=0; i<len; i++){
       if(a[i]-b[i]<0){
        c[i]=(a[i]-b[i])*-1;
       }else{
        c[i]=a[i]-b[i];
       }
    }

    for(int i=0; i<len; i++){
       printf("%d ",c[i]);
    }
  printf("\n");
    }
    return 0;
}