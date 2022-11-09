/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:31:01 by hasserao          #+#    #+#             */
/*   Updated: 2022/11/09 20:17:33 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int ft_putstr(char *s)
{
	int i;
	i = 0;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	return (i);
}
