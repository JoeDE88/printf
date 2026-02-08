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
	int			total;

	i = 0;
	total = 0;
	num_args = ft_strlen(format);
	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == '%')
		{
			total += ft_convert(args, format[i + 1]);
			i++;
		}
		else
			total += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (total);
}

int	main(void)
{
	unsigned int a = 4294967295;

	void *ptr = NULL;
	ft_printf("\ntotal mine: %d\n", ft_printf("%s %% %c %s %u %", (char *)ptr, 49, "", a));
	printf("\n");
	printf("\ntotal native: %d\n", printf("%s %% %c %s %u", (char *)ptr, 49, "", a));
}
