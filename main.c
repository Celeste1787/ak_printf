/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:44:34 by akdovlet          #+#    #+#             */
/*   Updated: 2023/11/21 18:36:20 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int main()
{
	char	*str = NULL;
	int	x;
	// x = ft_printf("%d\n", -2147483648);
	// ft_printf("x is: %d\n", x);
	x = 0;
	x = ft_printf("%x\n", -1500);
	printf("x = %d\n", x);
	x = printf("%x\n", -1500);
	printf("x = %d\n", x);
	// printf("x is: %d\n", x);
}