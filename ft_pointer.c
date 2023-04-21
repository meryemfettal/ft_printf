/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:17:37 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/19 17:33:11 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexapnbr(unsigned int nbr, char n, int *len)
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
		ft_hexapnbr(nbr / 16, n, len);
		ft_hexapnbr(nbr % 16, n, len);
	}
}

void	ft_pointer(int *adr, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)adr;
	ft_putstr("0x", len);
	ft_hexapnbr(ptr, 'x', len);
}

/*int main()
{
	int len = 0;
	int x = 1;
	ft_pointer(&x, &len);
	printf("\n%d", len);
}*/
