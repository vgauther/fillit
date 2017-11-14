/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:19:16 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/14 16:53:50 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include "libft.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd =  open((argv[1]), O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (argv[1])
	{
		if(ft_error(buf,argc) == 0)
			ft_putstr("error\n");
	}
	ft_solv(ft_convert(buf));
	return (0);
}
