#include<stdio.h> 
#include<stdlib.h>
#define maxsize 100
typedef struct{
	int r[maxsize];
	int length;
}SqList;

void Sort(SqList &L){
	int i,flag1,flag2,temp;
	flag1=1;flag2=0;int k=1;
	while(1){
		flag2=0;
		for(i=k;i<L.length-1;i+=2){
			if(L.r[i]>L.r[i+1]){
				temp=L.r[i];L.r[i]=L.r[i+1];L.r[i+1]=temp;
				flag2=1;
			}
		}
		if(flag1==0&&flag2==0) return;
		else{
			flag1=flag2;
			k=k%2+1;
		}
	}
}

int main(){
	SqList L;
	int i;
	scanf("%d",&L.length);
	for(i=1;i<L.length;i++){
		scanf("%d",&L.r[i]);
	}

	Sort(L);
	for(i=1;i<L.length;i++){
		printf("%d ",L.r[i]);
	}
	return 0;
	
}