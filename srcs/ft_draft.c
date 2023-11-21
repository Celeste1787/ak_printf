/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:00:16 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/21 18:31:57 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_draft(char flag, va_list arg)
{
	int	wrote;

	wrote = 0;
	if (flag == 'c')
		wrote = c_handler(arg);
	else if (flag == 'd' || flag == 'i')
		wrote = d_handler(arg);
	else if (flag == 'u')
		wrote = u_handler(arg);
	else if (flag == 'p')
		wrote = p_handler(arg);
	else if (flag == 's')
		wrote = s_handler(arg);
	else if (flag == 'x')
		wrote = x_handler(arg, 1);
	else if (flag == 'X')
		wrote = x_handler(arg, 0);
	else if (flag == '%')
		wrote = write(1, "%", 1);	
	else
		return (-1);
	return (wrote);
}