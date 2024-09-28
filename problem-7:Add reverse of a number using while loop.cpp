#include<stdio.h>
int main(){
int num,m;
scanf("%d",&num);
while(num>0)
{
  m=num%10;
  printf("%d",m);
  num=num/10;
}
return 0;

}
