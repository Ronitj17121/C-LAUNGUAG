#include<stdio.h>
 void main()
{

int a,b,c,d;

 printf("enter value for A : ");
 scanf("%d",&a);
 printf("enter value for B : ");
 scanf("%d",&b);
 printf("enter value for C : ");
 scanf("%d",&c);
 printf("enter value for D : ");
 scanf("%d",&d);
  

 if(a>b)
 {
   if(a>c)
   {
   	if(a>d)
   	{
   		printf("a is maximum : ");
	   }
	   else 
	   {
	   	 printf("d is maximum : ");
	   }
	   }
	   else
	   {
	   	printf("c is maximum : ");
	   	
	   	
		   }	
 }
 else
 {
 	if(b>c)
 	{
 		if(b>d)
 		{
 			printf(" b is maximum : ");
		 }
		 else
		 {
		 	printf("d is maximum : ");
		 }
		 
	 }
	 else
	 { 
	 if(c>d)
	 {
	 	printf("c is maximum : ");
	 }
	 else
	 {
	 	printf("d is maximum : ");
	 }
	 }
 	
 }
}

 
