/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:11 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/20 19:43:19 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	long	x;
	int		count;

	x = (long) n;
	count = 0;
	if (x < 0)
	{
		x *= -1;
		ft_putchar('-');
	}
	if (x > 9)
		ft_putnbr(x / 10);
	ft_putchar(x + 48);
	count++;
	return (count);
}