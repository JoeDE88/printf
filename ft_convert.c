/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:01:00 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/06 17:01:02 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_convert(va_list args, char specifier)
{
	if (specifier == 'd' || specifier == 'i')
	{
		int x = va_arg(args, int);
		char *c; 
		c = ft_itoa(x);
		ft_putstr_fd(c, 1);
		free(c);
	}
	if (specifier == 'c')
	{
		int c = va_arg(args, int);
		ft_putchar_fd(c, 1);
	}
	if (specifier == 's')
	{
		char *c = va_arg(args, char *);
		ft_putstr_fd(c, 1);
	}
	/* if (specifier == 'u')
	{
		unsigned int u = va_arg(args, unsigned int);
		char *c;
		c = ft_itoa(u);
		ft_putstr_fd(c, 1);
	} */
	return (1);
}