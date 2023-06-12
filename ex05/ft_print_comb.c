#include <unistd.h>
#include <stdio.h>
void	print_3nums(int num1, int num2, int num3)
{
	char character_zero;
	char temp;
	int digit[3];
	int iter;
	
	iter = 0;
	character_zero = '0';
	
	digit[2] = num3; 
	digit[1] = num2; 
	digit[0] = num1;
	while (iter < 3)
	{
		temp = character_zero + digit[iter];
		write(1, &temp, 1);
		iter++;
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;
	int total;
	char coma[2];

	coma[0] = ',';
	coma[1] = ' ';
	num1=0;
	while(num1 < 10)
	{
		num2 = num1+1;
		while(num2 < 10)
		{
			num3 = num2+1;
			while (num3 < 10)
			{
				total = num1*100 + num2*10 +num3;
				print_3nums(num1, num2, num3);
				if (total != 789){
					write(1, &coma, 2);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}

}
