#include<stdio.h>
#include<conio.h>
main()
{
	int n,Number, remainder,Reversed_Number=0;
	printf("Enter a number=");
	scanf("%d",&n);
	Number=n;
	while(n != 0)
	{
		remainder = n%10;
		Reversed_Number=Reversed_Number*10+remainder;
		n /=10;
	}
	printf("Reversed of Original Number=%d",Reversed_Number);
	
	if(Number==Reversed_Number)
	 {
	 	printf("\n %d is a Palindrome Number", Number);
	 }
	 else
	 {
	 	printf("\n %d is not a Palindrome Number", Number);
	 }
 return 0;
}
