/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:34:54 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/02 11:34:55 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		i;
	size_t		num_args;

	i = 0;
	num_args = ft_strlen(format);
	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == '%')
		{
			i++;
			ft_convert(args, format[i]);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	int	a = 3553;
	int	*ptr;

	ptr = &a;
	ft_printf("u: %p\n", ptr);
	printf("native: %p\n", ptr);
}
