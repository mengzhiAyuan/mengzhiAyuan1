#include<stdio.h>
int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    char array[100][100]={0};
    for(int i=0;i<N;i++){
            scanf("%s",array[N]);
    }
    int top;
    int cnt=1;
    for(int i=0;i<N;i++){
        top=-1;cnt=1;
        for(int j=0;array[i][j]!='\0';j++){
            if(array[i][j]=='s')top++;
            if(array[i][j]=='x')top--;
            if(top<-1||top>=M)cnt=0;
        }
        if(cnt==0){printf("NO\n");}
        else{
            printf("YES\n");
        }
    }
    return 0;

}