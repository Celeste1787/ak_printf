/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:49:03 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/21 19:23:27 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_addr(void *ptr)
{
    int             i;
    char            *hex;
    unsigned char   *addr;
	int				wrote;

    i = 7;
	wrote = 0;
    hex = "0123456789abcdef";
    addr = (unsigned char *) &ptr;
    write(1, "0x", 2);
	while (addr[i] == 0)
		i--;
    while (i >= 0)
    {
        ft_put_n_count_char(hex[addr[i] / 16]);
        ft_put_n_count_char(hex[addr[i] % 16]);
        i--;
		wrote += 2;
    }
	return (wrote + 2);
}
int	p_handler(va_list arg)
{
	size_t n;

	n = va_arg(arg, size_t);
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	return (ft_print_addr((void *)n));
}