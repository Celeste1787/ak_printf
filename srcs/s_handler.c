/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:43:29 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:58 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int   ft_putstr(char *str)
{
    return(write(1, str, ft_strlen(str)));
}

int	s_handler(va_list arg)
{
	char	*str;
	
	str = va_arg(arg, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}