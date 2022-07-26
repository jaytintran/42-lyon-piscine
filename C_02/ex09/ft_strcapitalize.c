/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:47:10 by tintran           #+#    #+#             */
/*   Updated: 2022/07/13 16:49:17 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			i = 1;
		}
		else if (i == 1 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if (str[c] < '0' || (str[c] > '9' && str[c] < 'A'))
			i = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
			i = 0;
		else
		{
			i = 1;
		}
		c++;
	}
	return (str);
}
