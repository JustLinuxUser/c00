#include <stdio.h>
#include <stdlib.h>

void print_n(int n, int *arr)
{
	for(int i = 0; i < n; i++)
		printf("%i", arr[i]);
	printf("\n");
}
int main (int argc, char**argv)
{
	int n;
	int num[10];
	if (argc != 2)
	{
		printf("Provide 1 int arg\n");
		return -1;
	}
	n = atoi(argv[1]);
	if (n < 1 || n > 7)
	{
		printf("pls put it in range\n");
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		num[i] = i;
	}
	while (1)
	{
		int lowest = 999;
		for (int i = n - 1; i > 0; i--)
		{
			if(num[i] > 10 - n + i) 
			{
				if (i < lowest)
					lowest = i;
				num[i - 1]++;
				num[i] = num[i - 1] + 1;
			}
		}
		
		for(int i = lowest + 1; i < n; i++)
		{
			for(; i < n; i++)
			{
				num[i] = num[i - 1] + 1;
			}
		}
		if (num[0] > 10 - n)
			return 0;
		print_n(n, num);
		num[n - 1] ++;
	}
}
