#include<stdio.h>
#include<conio.h>
main()
 {
int a,b;
scanf("%d %d",&a,&b);
if(a==1 || b==0  ||a==0 || b==1 )
{
printf("Smallest non-negative integer is 2");	
}
else
{
printf("Smallest non-negative integer is 0");
}
return 0;    
}
