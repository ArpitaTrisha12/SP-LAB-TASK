#include<stdio.h>
int main(){
char ch;
int a,b;
scanf("%d %d",&a,&b);
scanf("%c",&ch);
switch(ch){
case'+':
printf("%d\n",a+b);
break;
case'-':
printf("%d\n",abs(a-b));
break;
case'*':
printf("%d\n",a*b);
break;
case'/':
  printf("%d\n",a/b);
break;
default:
printf("Invaild Operation\n");
}
return 0;
}

