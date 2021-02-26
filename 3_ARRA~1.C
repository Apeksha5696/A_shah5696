#include<stdio.h>              //including stdio.h for printf
#include<conio.h>

void main()                        //default function for call
{
	int a[200],num,i,j;
	clrscr();
	printf("Enter Array size: ");
	scanf("%d",&num);
	printf("Enter Elements: ");

      for(i=0;i<num;i++)
    {
	scanf("%d",&a[i]);
    }
	for (i = 0; i < num; i++)                     //Loop for ascending ordering
	{
		for (j = 0; j < num; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}
		}
	}
	printf("\n\nArray in Ascending order: ");                     //Printing message
	for (i = 0; i < num; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);
	}
       getch();
}
