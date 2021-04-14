/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_as_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:28:57 by egomes            #+#    #+#             */
/*   Updated: 2021/04/14 20:31:01 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printas_u(t_obj *obj, const char *str)
{
	t_as	asd;

	asd.i = va_arg(obj->ap, int);
	asd.s = ft_itoap(va_arg(obj->ap, unsigned int));
	asd.size = ft_strlen(asd.s);
	asd.cpy *= asd.i;
	if (asd.i >= asd.size)
		as_d(&asd, str, obj);
	else
		ft_putchars(asd.s, obj);
	free(asd.s);
}

void	as_c(t_as *asc)
{
	if (asc->i < 0)
	{
		asc->cpy *= asc->i;
		asc->buff = ft_newstr(asc->cpy - 1);
		ft_memset(asc->buff, ' ', asc->cpy - 1);
	}
	else if (asc->i > 0)
	{
		asc->buff = ft_newstr(asc->i - 1);
		ft_memset(asc->buff, ' ', asc->i - 1);
	}
	else
	{
		asc->buff = ft_newstr(asc->i);
		ft_memset(asc->buff, ' ', asc->i);
	}
}

void	ft_printas_c(t_obj *obj, const char *str)
{
	t_as	asc;

	asc.cpy = -1;
	asc.i = va_arg(obj->ap, int);
	asc.c = (char)(va_arg(obj->ap, int));
	as_c(&asc);
	if (asc.i == 0)
		ft_putchar(asc.c, obj);
	else if (str[-1] == '-' || asc.cpy > 0)
	{
		ft_putchar(asc.c, obj);
		ft_putchars(asc.buff, obj);
	}
	else if (asc.i > 0)
	{
		ft_putchars(asc.buff, obj);
		ft_putchar(asc.c, obj);
	}
	free(asc.buff);
}