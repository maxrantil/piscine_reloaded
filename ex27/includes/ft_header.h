/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:23:19 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/01 18:00:49 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 1

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_argc(int argc);

#endif
