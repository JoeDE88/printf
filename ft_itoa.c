/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:00:14 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/05 16:00:18 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int n)
{
	int		digits;
	int		is_negative;
	long	nbr;
	char	*str;

	is_negative = 0;
	nbr = n;
	digits = ft_countdigits(nbr, 10);
	if (nbr < 0)
	{
		nbr *= -1;
		is_negative = 1;
	}
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	ft_fillstr(str, digits, nbr, 10);
	if (is_negative)
		str[0] = '-';
	return (str);
}
