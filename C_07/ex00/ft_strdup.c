/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:49:49 by tintran           #+#    #+#             */
/*   Updated: 2022/07/19 16:47:40 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str);
}
