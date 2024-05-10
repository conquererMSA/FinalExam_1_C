#include<stdio.h>
int main(){
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
        int len;
        scanf("%d",&len);
        char s[len];
    scanf("%s",&s);
    int tiger=0, pathaan=0;
    for(int i=0; i<len; i++){
        if(s[i]=='T'){
            tiger++;
        }else if(s[i]=='P'){
            pathaan++;
        }
    }
    if(pathaan>tiger){
        printf("Pathaan");
    }else if(tiger>pathaan){
        printf("Tiger");
    }else{
        printf("Draw");
    }
    printf("\n");
    }
    
    return 0;
}