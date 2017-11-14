/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:21:37 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/14 12:50:49 by vgauther         ###   ########.fr       */
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

	i = 0;
	k = 0;
	while (str[i])
	{
		if((str[i] == '\n' && k % 4 == 0) ||(str[i] == '\n' && k == 0))
			k++;
		if(k == 4 && k != 0)
		{
			if(str[i+1] != '\n')
				return (0);
		}
		if (str[i] == '\n'&& str[i + 1] =='\n' && str[i + 2] == '\n' )
			return (0);
		i++;
	}
	return (1);
}

int		ft_error(char *str, int argc)
{
	int i;

	i = 0;
	if (argc != 2)
		return (0);
	while(str[i])
	{
		if(str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		i++;
	}
	if(ft_error2(str) == 0)
		return (0);
	return(ft_syntaxisgood(str));
}
