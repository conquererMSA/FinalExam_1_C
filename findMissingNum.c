#include<stdio.h>
int main(){
    long long int multi;
    int a,b,c;
    scanf("%lld %d %d %d",&multi,&a,&b,&c);
    if(multi<=0){
        printf("%d\n",0);
    }
    else {
        int i=1;
      while(1){
        if(i*a*b*c==multi){
            printf("%d\n",i);
            break;
        }else if(i*a*b*c>multi){
            printf("%d\n",-1);
            break;
        }
        i++;
      }
    }

    return 0;
}