/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_u3_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:51:31 by egomes            #+#    #+#             */
/*   Updated: 2021/04/17 22:44:27 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dot_u3_1(t_dot *dotd)
{
	if (dotd->bu < 0)
	{
		dotd->bf = ft_newstr(dotd->cpybu);
		ft_memset(dotd->bf, ' ', dotd->cpybu);
	}
	else
	{
		dotd->bf = ft_newstr(dotd->bu);
		ft_memset(dotd->bf, ' ', dotd->bu);
	}
}

void	dot_u3_2_1(t_dot *dotd, t_obj *obj, const char *str)
{
	ft_memcpy(dotd->af, dotd->s, dotd->au - dotd->lu, dotd->lu);
	ft_neg(dotd->af);
	if (str[-1] == '-' || str[-2] == '-' || ft_isneg(dotd->s))
		ft_memcpy(dotd->bf, dotd->af, 0, dotd->au);
	else
		ft_memcpy(dotd->bf, dotd->af, dotd->bu - dotd->au, dotd->au);
	ft_putchars(dotd->bf, obj);
}
