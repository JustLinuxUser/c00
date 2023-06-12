#include <unistd.h>

int	count_int_digits(int num)
{
	int	result;

	result = 1;
	num = num/10;
	while (num != 0){
		result++;
		num = num/10;
	}
	return result;
}

void	ft_putnbr(int nb)
{
	int	iter;
	int	len;
	long	nb_l;
	char	zero;
	char	minus;
	char	res[20];

	minus = '-';
	zero = '0';
	nb_l = nb;
	len = count_int_digits(nb);
	iter = 0;
	if (nb_l < 0)
	{
		write(1, &minus, 1);
		nb_l *= -1;
	}
	while (iter <= len)
	{
		res[len-iter-1] = zero + nb_l%10;
		nb_l = nb_l/10;
		iter++;
	}
	write(1, &res, len);
}
