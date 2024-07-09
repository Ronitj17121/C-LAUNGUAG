#include<stdio.h>
#include<conio.h>

 void main()
{
 int A,B,C;
 
 printf("enter value for A : ");
 scanf("%d",&A);
 printf("enter value for B : ");
 scanf("%d",&B);
 printf("enter value for C : ");
 scanf("%d",&C);
 
 if(A<B)
 {
 	if(A<C)
 	{
 		printf("A is minimum : ");
	 }
	 else
	 {
	 	printf("C is minimum : ");
	 }
	 	 
 }
 else
 {
  if(B<C)
  {
  	printf("B is minimum : ");
	  }
	  else
	  {
	  	printf("c is minimum : ");
		  }	
 }
}
