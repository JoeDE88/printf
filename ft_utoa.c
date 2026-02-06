/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:59:42 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/06 18:59:44 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(size_t n, int base)
{
	int		digits;
	char 	*str;
	base = 0;
	digits = ft_countdigits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	ft_fillstr(str, digits, n);
	return (str);
}

int main(void)
{
	size_t	a = 244294294967295;
	char	*p;
	p = ft_utoa(a, 10);
	printf("utoa: %s\n", p);
	free(p); 
}