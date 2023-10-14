#include<stdio.h>



int seek_number(int n)

{
	int i,sum=0;			
	int x = 1;
	/*int a[10] = { 0 };*/
	for (i = 0; i < n; i++)
	{
		int count = 0;
		int temp = 0;
		int j = 0;
		j = i;
			while (j)
			{
			
				j = j / 10;//
				count++;

			}
			temp = count;
			while (i)
			{

				while (count)
				{
					x *= (i % 10);
					count--;
				}
				count = temp;
				sum += x;
					i = i / 10;
					x = 1;
			}
			if(sum==i)
				printf("%d\n", sum);
		}
		
		return 0;
		
	}

	







int main()
{
	seek_number(999);
	return 0;
}