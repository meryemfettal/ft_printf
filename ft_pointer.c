/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:17:37 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/24 16:30:43 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexapnbr(unsigned long nbr, char n, long *len)
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

void	ft_pointer(unsigned long *adr, long *len)
{
	unsigned long	ptr;

	ptr = (unsigned long)adr;
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
