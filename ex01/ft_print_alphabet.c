/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:47:46 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/05 15:57:59 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;
	char	i;

	i = 0;
	start = 'a';
	while (i < 26)
	{
		write(1, &start, 1);
		start++;
		i++;
	}
}
