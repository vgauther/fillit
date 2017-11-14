/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:39:45 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/14 14:33:29 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

int		testing(int num,char **tab, int x, int y)
{
	int k;

	k = 0;
	if(num <= 4 && num != 1)
	{
		if(tab[y][x]==tab[y - 1][x])
			k++;
	}
	if(num >= 1 &&  num != 4)
	{
		if(tab[y][x]== tab[y + 1][x])
			k++;
	}
	if (x >= 0 && x != 3)
	{
		if(tab[y][x + 1] == tab[y][x])
			k++;
	}
	if (x <= 3 && x != 0)
	{
		if(tab[y][x]==tab[y][x - 1])
			k++;
	}
	return (k);
}

int		tetriminosisgood(char *str)
{
	int x;
	int y;
	int num;
	int k;
	char **tab;

	num = 1;
	y = 0;
	x = 0;
	k = 0;
	tab = ft_strsplit((const char *)str, '\n');
	while(tab[y])
	{
		while(tab[y][x])
		{
			if(tab[y][x] == '#')
			{
				k = k + testing(num, tab, x, y);
				if (k == 0)
					return (0);
				if (k == 1)
					k = 0;
				if (k == 2)
					k = 1;
			}
			x++;
		}
		num++;
		if (num == 5)
		{
			printf("%d\n", y);
			num = 1;
			if (k < 3)
			{
				return (0);
			}
			k = 0;
		}
		x = 0;
		y++;
	}
	//printf("%d",y);
	return (1);
}

int		ft_error2(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while(str[i])
	{
		while(str[i] != '\n')
		{
			i++;
			x++;
		}
		if(str[i - 1]== '\n')
			x = 4;
		if(x != 4)
			return (0);
		x = 0;
		i++;
	}
	return (tetriminosisgood(str));
}
