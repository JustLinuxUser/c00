#include "unistd.h"

void print_int2(int num){
	char	zero;
	char	temp;

	zero = '0';
	if (num < 10)
	{
		temp = zero + num;
		write(1, &zero, 1);
		write(1, &temp, 1);
	}
	else
	{
		temp = zero + num/10;
		write(1, &temp, 1);
		temp = zero + num%10;
		write(1, &temp, 1);
	}
	
}

void	print_space(void)
{
	char	space;

	space = ' ';
	write(1, &space, 1);
}

void	print_coma(void)
{
	char	coma;

	coma = ',';
	write(1, &coma, 1);
}

void	ft_print_comb2(void){
	int	num0;
	int	num1;

	num0 = 0;
	while (num0 < 99)
	{
		num1=num0+1;
		while (num1 <= 99)
		{
			print_int2(num0);
			print_space();
			print_int2(num1);
			if(num0 != 98 || num1 != 99)
			{
			print_coma();
			print_space();
			}
			num1++;
		}
		num0++;
	}
}

// int	main()
// {
// 	ft_print_comb();
// }
