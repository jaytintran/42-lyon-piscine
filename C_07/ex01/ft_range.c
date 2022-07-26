/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:39:56 by tintran           #+#    #+#             */
/*   Updated: 2022/07/19 17:17:54 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	size;
	int	counter;

	counter = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	res = (int *)malloc(size * sizeof(int));
	while (counter < size)
	{
		res[counter] = min + counter;
		counter++;
	}
	return (res);
}
