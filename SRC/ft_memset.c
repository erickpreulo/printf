/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:07:18 by egomes            #+#    #+#             */
/*   Updated: 2021/04/13 12:11:40 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(char *s, int c, size_t n)
{
	size_t			i;
	unsigned char	holder;
	char			*p;

	holder = c;
	i = 0;
	p = s;
	while (i < n)
		p[i++] = holder;
	return (s);
}

void	*ft_memsetstart(char *s, int c, size_t start, size_t n)
{
	unsigned char	holder;
	char			*p;

	holder = c;
	p = s;
	while (start < n)
		p[start++] = holder;
	return (s);
}