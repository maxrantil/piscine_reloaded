/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:32:27 by mrantil           #+#    #+#             */
/*   Updated: 2021/10/29 18:03:00 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	while (len > 0)
	{
		arr[i] = min;
		min++;
		i++;
		len--;
	}
	return (arr);
}
