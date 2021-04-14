/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:04:57 by egomes            #+#    #+#             */
/*   Updated: 2021/04/14 20:40:11 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printc(const char *str, t_obj *obj)
{
	char	c;

	if (str[0] == '*' || (str[0] != 'c' && str[1] == '*'))
		ft_printas_c(obj, str);
	else
		c = (char)va_arg(obj->ap, int);
	if ((str[-1] == '-') && (str[0] >= '0' && str[0] <= '9'))
		ft_printendspacec(c, obj);
	else if (str[0] >= '1' && str[0] <= '9')
		ft_printspacec(c, obj);
	else if (str[0] == 'c')
		ft_putchar(c, obj);
}
