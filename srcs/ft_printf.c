/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:00:29 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/20 18:28:11 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list arg;
	int		wrote;
	int		i;

	wrote = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			{
				wrote += ft_draft(str[i + 1], arg);
				i++;
			}
		else
		{
			ft_putchar(str[i]);
			wrote++;
		}
		i++;
	}
	return (wrote);
}