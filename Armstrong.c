#include<stdio.h>
#include<conio.h>
main()
{
int n,Number, remainder,result=0;
printf("Enter a three-digit number=");
scanf("%d",&Number);
  n=Number;
  
  while(n!=0)
  {
  	remainder=n%10;
  	result+= remainder*remainder*remainder;
  	n/=10;
  }	
  
  if(result==Number)
    {
    	printf("True, %d is an Armstrong Number",Number);
	}
	else
	{
    	printf("False, %d is not an Armstrong Number",Number);
	}	
return 0;	
}
