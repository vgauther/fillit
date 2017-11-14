/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:44:20 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/14 17:03:27 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

char **ft_convert(char *str)
{
	char **tab;
	int i;
	int c;
	int num;

	i = 0;
	num = 1;
	c = 'A';
	while (str[i])
		{
			if(str[i] == '#')
			{
				str[i] = c;
				num++;
			}
			if(num == 5)
			{
				c++;
				num = 1;
			}
			i++;
		}
	tab = ft_strsplit(str, '\n');
	return (tab);
}
