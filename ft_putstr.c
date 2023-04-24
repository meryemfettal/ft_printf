/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:48:15 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/23 19:27:22 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, long *len)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*(len) += 6;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i], len);
		i++;
	}
}

// int main()
// {
// 	int len = 0;

// 	ft_putstr("",  &len);
// 	printf("\n%d", len);
// }
