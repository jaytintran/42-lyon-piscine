/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:05:40 by tintran           #+#    #+#             */
/*   Updated: 2022/07/14 15:15:10 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	last_index_of_dest;
	int	i;

	last_index_of_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[last_index_of_dest] = src[i];
		i++;
		last_index_of_dest++;
	}
	dest[last_index_of_dest] = '\0';
	return (dest);
}
