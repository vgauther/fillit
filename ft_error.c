/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:21:37 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/13 19:48:38 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		ft_findchr(char *str, int c, int i)
{
	while(str[i] != c)
		i++;
	return (i);
}

int		ft_syntaxisgood(char *str)
{
	int i;
	int k;
	int p;

	i = 0;
	k = 0;
	p = 0;
	while (str[i])
	{
		while (k != 4)
		{
			i = ft_findchr(str, '\n', i);
			printf("%d",i);
			if(i - p != 4 && i - p != 5)
				return (3);
			k++;
			p = ft_findchr(str, '\n', p);
			printf("%c",str[i]);
			printf("%c", 'l');
			i++;
		}
		//printf("%c",str[i]);
		//printf("%c",str[i]);
		if(str[i+1] != '.' && str[i+1] != '#')
		{
			printf("%c", str[i+1]);
			return (4);
		}
		k = 0;
		i++;
	}
	return (1);
}

int		ft_error(char *str, int argc)
{
	int i;

	i = 0;
	if (argc != 2)
		return (5);
	while(str[i])
	{
		if(str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (2);
		i++;
	}
	return(ft_syntaxisgood(str));
}
