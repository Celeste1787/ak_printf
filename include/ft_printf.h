/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:41:04 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/20 19:46:16 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
int		ft_printf(const char *, ...);
int		p_handler(va_list arg);
int		c_handler(va_list arg);
int	    ft_print_addr(void *ptr);
int	    ft_draft(char flag, va_list arg);
int		ft_putnbr(int n);

#endif