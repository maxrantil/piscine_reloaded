/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:09:31 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/01 16:22:09 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	char		buf[BUF_SIZE + 1];
	int			fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error.\n");
	}
	if (ft_argc(argc))
	{
		while (read(fd, buf, BUF_SIZE))
		{
			write(1, &fd, 1);
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}
