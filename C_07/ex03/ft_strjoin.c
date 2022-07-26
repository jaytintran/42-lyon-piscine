/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:16:54 by tintran           #+#    #+#             */
/*   Updated: 2022/07/20 14:36:03 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	last_index_dest;
	unsigned int	i;

	i = 0;
	last_index_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[last_index_dest + i] = src[i];
		i++;
	}
	dest[last_index_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	accumulated_size;
	char			*result_array;
	int				i;

	i = 0;
	while (i < size)
	{
		accumulated_size += ft_strlen(strs[i]);
		i++;
	}
	accumulated_size += ft_strlen(sep) * (size - 1);
	result_array = malloc(accumulated_size + 1);
	if (!result_array)
		return (NULL);
	result_array[0] = 0;
	if (size == 0)
		return (result_array);
	i = 0;
	while (i < size)
	{
		ft_strcat(result_array, strs[i]);
		if (i != size - 1)
			ft_strcat(result_array, sep);
		i++;
	}
	result_array[ft_strlen(result_array)] = 0;
	return (result_array);
}
