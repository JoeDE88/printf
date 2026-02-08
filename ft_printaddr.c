/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:04:39 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/08 19:09:55 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ptrtoa(uintptr_t addr)
{
	int		digits;
	char	*str;

	digits = ft_countdigits(addr, 16);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	ft_fillstr(str, digits, addr, 16);
	return (str);
}

int	ft_printaddr(uintptr_t addr)
{
	char	*s;
	int		len;

	if (addr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		s = ft_ptrtoa(addr);
		len = ft_printstr("0x", 'x');
		len += ft_printstr(s, 'x');
		free(s);
		return (len);
	}
}
