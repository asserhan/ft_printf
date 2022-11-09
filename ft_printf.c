/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:28:32 by hasserao          #+#    #+#             */
/*   Updated: 2022/11/09 20:46:40 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_print_str(va_list ap, const char str)
{
	int	len;
	
	len = 0;
	if (str == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (str == 's')
			len += ft_putstr(va_arg(ap, char *));
	else if (str == 'p')
			len += ft_print_address(va_arg())
		
	
}
int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	i;
	int len;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len +=ft_print_str(ap,str[i + 1]);
			i++;
		}
		else
			len +=ft_putchar(str[i]);
		i++;
	}
	return (len);
}
int main()
{
	printf("miss %s has %d ,"hanane",24);
}