#include<stdio.h>
int main(){
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
    int len;
    scanf("%d",&len);
    int a[len], b[len], c[len];
    for(int i=0; i<len; i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    //ascendig  b array
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(b[j]<b[i]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }
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