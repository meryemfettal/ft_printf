/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:29 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/21 15:06:02 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	next(va_list sptr, const char c, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(sptr, int), len);
	if (c == 'c')
		ft_putchar(va_arg(sptr, int), len);
	if (c == 's')
		ft_putstr(va_arg(sptr, char *), len);
	if (c == 'x' || c == 'X')
		ft_hexanbr(va_arg(sptr, int), c, len);
	if (c == 'p')
		ft_pointer(va_arg(sptr, int *), len);
	if (c == 'u')
		ft_putunbr(va_arg(sptr, unsigned int), len);
	if (c == '%')
		ft_putchar(c, len);
}

int	ft_printf(const char *s, ...)
{
	va_list	sptr;
	int		len;

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
