/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:00:16 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/20 18:28:11 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_draft(char flag, va_list arg)
{
	int	wrote;

	wrote = 0;
	if (flag == 'c')
		wrote = c_handler(arg);
	return (wrote);
}