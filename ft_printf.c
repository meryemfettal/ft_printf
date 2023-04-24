/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:29 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/24 16:31:24 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	next(va_list sptr, const char c, long *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(sptr, int), len);
	else if (c == 'c')
		ft_putchar(va_arg(sptr, int), len);
	else if (c == 's')
		ft_putstr(va_arg(sptr, char *), len);
	else if (c == 'x' || c == 'X')
		ft_hexanbr(va_arg(sptr, int), c, len);
	else if (c == 'p')
		ft_pointer(va_arg(sptr, unsigned long *), len);
	else if (c == 'u')
		ft_putunbr(va_arg(sptr, unsigned int), len);
	else if (c == '%')
		ft_putchar(c, len);
}

int	ft_printf(const char *s, ...)
{
	va_list	sptr;
	long	len;

	len = 0;
	va_start(sptr, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			next(sptr, *s, &len);
		}
		else
			ft_putchar(*s, &len);
			s++;
	}
	va_end(sptr);
	return (len);
}
