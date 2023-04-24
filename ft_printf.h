/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:54:45 by mfettal           #+#    #+#             */
/*   Updated: 2023/04/23 19:23:19 by mfettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(int c, long *len);
void	ft_putstr(char *s, long *len);
void	ft_putnbr(int n, long *len);
void	ft_putunbr(unsigned int n, long *len);
void	ft_hexanbr(unsigned int nbr, char n, long *len);
void	ft_pointer(unsigned long *adr, long *len);

#endif
