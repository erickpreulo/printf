/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_neg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 22:03:57 by egomes            #+#    #+#             */
/*   Updated: 2021/05/14 16:59:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_neg(char *str)
{
	int		j;
	int		buff;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == '-' || str[j] == '+')
		{
			if (j == 0)
				str[j] = '0';
			else
			{
				buff = str[j];
				str[j] = str[0];
				str[0] = buff;
			}
		}
		j++;
	}
}

void	ft_negdi(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			str[i] = str[i - 1];
		}
		i++;
	}
}

int	ft_isneg(char *str)
{
	if (str[0] == '-')
		return (1);
	return (0);
}

int	ft_findless(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '%')
	{
		if (str[i] == '-')
			return (1);
		i--;
	}
	return (0);
}

/*if (r % 2 == 0)
		return (1);
	else
		return (0);*/

char	*ft_newstr(size_t size)
{
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str[size] = '\0';
	return (str);
}
