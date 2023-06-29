#include<unistd.h>
#include<stdio.h>

void	put_combn(int n, int output[])
{
	
}
int	count_base(int n, int base, int output[])
{
	int	iter;
<<<<<<< HEAD
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
=======
	int carry;

	n--;
	carry = 0;
	iter = n;
	output[n] += 1;
	while (0 <= iter)
	{
		if (output[iter] >= base)
		{
			carry
			if (iter >= 1)
			{
				output[iter - 1] ++;
				output[iter] = output[iter - 1];
			}
			else
			{
				output[iter]--;
				return -1;
			}
		}
		iter--;
	}
	return 0;
>>>>>>> df6e43e (a change)
}

void	ft_print_combn(int n)
{
	int	base;
	int	output[10] = {0};
<<<<<<< HEAD
	
	base = 10 - n;
=======

	base = 11 - n;
>>>>>>> df6e43e (a change)
	while(0 == count_base(n, base, output))
	{
		printf("%i%i%i, ", output[0], output[1] + 1, output[2] + 2);
	}
}

int	main(int argc, char **argv)
{
	// if (argc != 3)
	// 	return (-1);
	ft_print_combn(3);

}
