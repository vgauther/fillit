/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfil.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:14:18 by vgauther          #+#    #+#             */
/*   Updated: 2017/11/13 19:00:06 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFIL_H
# define LIBFIL_H
# define BUF_SIZE 4096

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		ft_error(char *str, int argc);

#endif
