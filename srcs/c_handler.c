/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:52 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/22 12:27:03 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_put_n_count_char(char c)
{
	return (write(1, &c, 1));
}

int	c_handler(va_list arg)
{
	return (ft_put_n_count_char(va_arg(arg, int)));
}
