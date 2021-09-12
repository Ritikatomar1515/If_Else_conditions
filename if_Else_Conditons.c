#include<stdio.h>
#include<conio.h>

int main()
{
	
   int marks;
   
   printf("enter your marks : \n");
   scanf("%d" , &marks);
   
   if(marks> 100)
   {
   	  printf("wrong entry \n");
   }
   else if(marks <1)
   {
   	   printf("wrong entry \n");
   }
   else if(marks >= 85 && marks <= 100)
   {
   	    printf(" Grade A \n");
   }
   else if(marks >= 70 && marks <= 84)
	{
		printf(" Grade B \n");
	}
	else if( marks >= 55 && marks <= 69)
	{
		printf(" Grade C \n");
	}
	else if(marks >= 40 && marks >= 54)
	{
		printf(" Grade D \n");
	}
	else 
	{
		printf(" Grade F \n");
	}
    	
	
	
	return 0;
}
