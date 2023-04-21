/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:53:59 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/19 16:03:48 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar('-', len);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
	{
		ft_putchar(nbr + '0', len);
	}
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
}

/*int main()
{
	int len = 0;

	ft_putnbr(2147483647, &len);
	printf("\n%d", len);
}*/
