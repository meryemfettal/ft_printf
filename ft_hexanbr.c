/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexanbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:37:00 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/23 19:23:19 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexanbr(unsigned int nbr, char n, long *len)
{
	char	*base;

	if (n == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		ft_putchar(base[nbr % 16], len);
	}
	else
	{
		ft_hexanbr(nbr / 16, n, len);
		ft_hexanbr(nbr % 16, n, len);
	}
}

/*int main()
{
	int len = 0;

	ft_hexanbr(12040, 'X', &len);
	printf("\n%d", len);
}*/
