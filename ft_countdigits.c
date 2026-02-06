/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:05:54 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/06 19:05:56 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits(long n)
{
	int	digits;

	digits = 1;
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n >= 10)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}
