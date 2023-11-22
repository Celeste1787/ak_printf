/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:11 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/22 12:27:33 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_put_n_count_nbr(int n, int count)
{
	long	x;
	int		tmp;

	x = (long) n;
	tmp = count;
	if (x < 0)
	{
		x *= -1;
		ft_put_n_count_char('-');
		tmp++;
	}
	if (x > 9)
		tmp = ft_put_n_count_nbr(x / 10, tmp + 1);
	ft_put_n_count_char((x % 10) + 48);
	return (tmp);
}

int	d_handler(va_list arg)
{
	int	n;

	n = va_arg(arg, int);
	return (ft_put_n_count_nbr(n, 1));
}
