/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:58:05 by hasserao          #+#    #+#             */
/*   Updated: 2022/11/10 23:24:48 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);
static void ft_print_str(va_list ap, const char str,int *len);
void ft_putchar(char c,int *len);
void ft_putstr(char *s,int *len);
void ft_print_address(unsigned long long n,int *len);
void ft_putnbr(int n, int *len);
void ft_putnbr_u(unsigned int n,int *len);

#endif
