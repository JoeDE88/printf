/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:59:42 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/08 17:36:46 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int n, int base)
{
	int		digits;
	char	*str;

	digits = ft_countdigits(n, base);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	ft_fillstr(str, digits, n, base);
	return (str);
}

int	ft_printunint(unsigned int n, int base, char spec)
{
	char	*s;
	int		len;

	s = ft_utoa(n, base);
	len = ft_printstr(s, spec);
	free(s);
	return (len);
}
