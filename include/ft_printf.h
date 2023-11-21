/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:41:04 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/21 19:20:40 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_printf(const char *, ...);
int		ft_put_n_count_char(char c);
int		ft_put_n_count_nbr(int n, int count);
int		ft_put_n_count_u(unsigned int n, int count);
int		ft_put_n_count_hex(unsigned int n, int count, int bin);
int		c_handler(va_list arg);
int		d_handler(va_list arg);
int		p_handler(va_list arg);
int		s_handler(va_list arg);
int		u_handler(va_list arg);
int		x_handler(va_list arg, int bin);
int	    ft_print_addr(void *ptr);
int	    ft_draft(char flag, va_list arg);

#endif