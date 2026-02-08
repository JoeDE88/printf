/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:32:13 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/02/02 11:32:37 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
int		ft_printint(int n);
int		ft_printunint(unsigned int n, int base, char spec);
int		ft_printchar(char c);
int		ft_printstr(char *s, char spec);
int		ft_convert(va_list args, char specifier);
int		ft_countdigits(long n, int base);
void	ft_fillstr(char *s, int digits, long n, int base);
void	ft_tolower(char *s);
int		ft_printaddr(uintptr_t addr);

#endif