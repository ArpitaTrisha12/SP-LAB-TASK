#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is the largest number",a);
else if (b>a&&b>c)
 printf("%d is the largest number",b);
else if (c>a&&c>b)
 printf("%d is the largest number",c);
else
    printf("ALL ARE EQUAL");
return 0;

}
