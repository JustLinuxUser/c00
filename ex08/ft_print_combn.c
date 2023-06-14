#include<unistd.h>
#include<stdio.h>

void	put_combn(int n, int output[])
{
	
}
int	count_base(int n, int base, int output[])
{
	int	iter;
	int	iter2;
	int	carry;

	iter = 0;
	output[n - 1] += 1;
	while (iter < n)
	{
		iter2 = 0;
		while (iter2 < n)
		{
			if (output[iter2] > base)
			{
				if (iter2 == 0)
				{
					output[iter2]--;
					return (-1);
				}
				output[iter2] = 0;
				output[iter2 - 1]++;
			}
			iter2++;
		}
		iter++;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	base;
	int	output[10] = {0};
	
	base = 10 - n;
	while(0 == count_base(n, base, output))
	{
		for (int i = 0; i < 10; i++)
			printf("%i, ", output[i]);
		printf("\n");
	}
}

int	main(int argc, char **argv)
{
	// if (argc != 3)
	// 	return (-1);
	ft_print_combn(5);
	
}
