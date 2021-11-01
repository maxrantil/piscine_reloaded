/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:31:52 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/01 10:35:56 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof (int) * len);
	if (arr)
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	return (arr);
}
