#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stack{
    int top;
    char *elem;
}L;
void push(L s,char e){
    s.elem[++s.top]=e;
}
void pop(L s){
    s.top--;
}
int stackempty(L s){
    if(s.top==-1)return 1;
    else return 0;
}
int main(){
    int state=1;
    L s;
    s.elem=(char*)malloc(100*sizeof(struct stack));
    s.top=-1;
    char *p=(char*)malloc(100);
    gets(p);
    while(*p!='.'&&*p!='\r'){
        switch (*p){
            case '{':
            case '(':
            case '/*':
            {
                push(s,*p);
                p++;break;
            }
            case '}':{
                if(!stackempty(s)&&s.elem[s.top]=='{')
                pop(s);
                else state=0;
                break;
            }
            case ')':{
                if(!stackempty(s)&&s.elem[s.top]=='(')
                pop(s);
                else state=0;
                break;
            }
            case '*/':{
                if(!stackempty(s)&&s.elem[s.top]=='/*')
                pop(s);
                else state=0; 
                break;
            }
        }
        if(!state&&s.top==-1) printf("YES\n");
        else
	{
		printf("NO\n");
		if(s.top!=-1)
		{
			if(s.elem[s.top]=='[') printf("[-?\n");
			else if(s.elem[s.top]=='(') printf("(-?\n");
			else if(s.elem[s.top]=='{') printf("{-?\n");
			else if(s.elem[s.top]=='/*') printf("/*-?\n");
		}
		else
		{
			if(s.elem[s.top]==']') printf("?-]");
			else if(s.elem[s.top]==')') printf("?-)");
			else if(s.elem[s.top]=='b') printf("?-*/");
			else if(s.elem[s.top]=='}') printf("?-}");
			putchar('\n');
		}
	}
    return 0;
    }
}
