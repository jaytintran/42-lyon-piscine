/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:20:00 by tintran           #+#    #+#             */
/*   Updated: 2022/07/14 15:15:51 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	last_index_dest;
	unsigned int	i;

	i = 0;
	last_index_dest = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[last_index_dest + i] = src[i];
		i++;
	}
	dest[last_index_dest + i] = '\0';
	return (dest);
}
