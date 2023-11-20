/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:52 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/20 18:28:11 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int	c_handler(va_list arg)
{
	ft_putchar(va_arg(arg, int));
	return (1);
}