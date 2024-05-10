#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d",&row, &col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        scanf("%d",&a[i][j]);
       }
    }
   int isJaduMatrix=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        if(i==j||i+j==row-1){
            if(a[i][j]!=1){
                isJaduMatrix=0;
                break;
            }
            continue;
        }    
        if(a[i][j]!=0){
          isJaduMatrix=0;
          break;
        }
       }
    }
    if(isJaduMatrix){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}