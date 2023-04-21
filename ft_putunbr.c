/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:04:28 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/19 16:38:44 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *len)
{
	if (n < 10)
	{
		ft_putchar(n + '0', len);
	}
	else
	{
		ft_putunbr(n / 10, len);
		ft_putunbr(n % 10, len);
	}
}

/*int main()
{
	int len = 0;

	ft_putunbr(5245, &len);
	printf("\n%d", len);
}*/
