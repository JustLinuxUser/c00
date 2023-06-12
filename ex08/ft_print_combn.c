#include<unistd.h>
#include<stdio.h>

int	count_base(int n, int base, int output[])
{
	int	iter;
	int	full;
	int	carry;

	full = 1;

	iter = n;
	output[base] += 1;
	while (0 >= iter)
	{
		if (carry == 1){
			carry = 1;
			output[iter] ++;
		}
		if (output[iter] >= base){
			carry = 1;
			output[iter] = 0;
		}
		iter--;
	}
	if (full == 1)
		return -1;
	return 0;
}

void	ft_print_combn(int n)
{
	int	base;
	int	output[10] = {0};
	
	base = 9 - n;
	while(0 == count_base(n, base, output))
	{
		for (int i = 0; i < 10; i++)
			printf("%i, ", output[i]);
		printf("\n");
	}
}

void	iterate(int number_of_iter)
{
}

int	main(int argc, char **argv)
{
	// if (argc != 3)
	// 	return (-1);
	ft_print_combn(5);
	
}
