/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:29:02 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/01 17:18:33 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		while (i <= nb)
		{
			res = i * res;
			i++;
		}
		return (res);
	}
	else
		return (0);
}
