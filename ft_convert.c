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
	int		total;

	total = 0;
	if (specifier == 'd' || specifier == 'i')
		total += ft_printint(va_arg(args, int));
	if (specifier == 'c')
		total += ft_printchar(va_arg(args, int));
	if (specifier == 's')
		total += ft_printstr(va_arg(args, char *), specifier);
	if (specifier == 'u')
		total += ft_printunint(va_arg(args, unsigned int), 10, specifier);
	if (specifier == 'X' || specifier == 'x')
		total += ft_printunint(va_arg(args, unsigned int), 16, specifier);
	if (specifier == 'p')
		total += ft_printaddr(va_arg(args, uintptr_t));
	if (specifier == '%')
		total += ft_printchar('%');
	return (total);
}
