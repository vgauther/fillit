/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:19:16 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/13 18:59:44 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd =  open((argv[1]), O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (argv[1])
		printf("%d",ft_error(buf,argc));
	return (0);
}
