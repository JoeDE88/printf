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

int	ft_convert(va_list args, char specifier)
{
	char	*s;

	if (specifier == 'd' || specifier == 'i')
	{
		s = ft_itoa(va_arg(args, int));
		ft_putstr_fd(s, 1);
	}
	if (specifier == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (specifier == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	if (specifier == 'u')
	{
		s = ft_utoa(va_arg(args, unsigned int), 10);
		ft_putstr_fd(s, 1);
	}
	if (specifier == 'X' || specifier == 'x')
	{
		s = ft_utoa(va_arg(args, unsigned int), 16);
		if (specifier == 'x')
			ft_tolower(s);
		ft_putstr_fd(s, 1);
	}
	if (specifier == 'p')
	{
		ft_memaddr(va_arg(args, uintptr_t));
	}
	return (1);
}
