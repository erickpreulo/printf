/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:18:03 by egomes            #+#    #+#             */
/*   Updated: 2021/04/14 20:59:41 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_newstr(size_t size)
{
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str[size] = '\0';
	return (str);
}