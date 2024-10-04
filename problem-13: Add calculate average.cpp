#include<stdio.h>
int main(){
int a,b,c,d,e,sum;
float average;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
average=(float)sum/5;
printf("The average is:%.4f\n",average);
return 0;
} 
