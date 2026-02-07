/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:04:04 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/06 19:04:05 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fillstr(char *s, int digits, long n, int base)
{
	int	rem;

	if (base == 10)
	{
		while (digits > 0)
		{
			s[digits - 1] = (n % base) + 48;
			digits--;
			n /= base;
		}
	}
	if (base == 16)
	{
		while (digits > 0)
		{
			rem = n % 16;
			if (rem < 10)
				s[digits - 1] = rem + 48;
			else
				s[digits - 1] = rem + 55;
			digits--;
			n /= base;
		}
	}
}
