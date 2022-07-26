/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:19:29 by tintran           #+#    #+#             */
/*   Updated: 2022/07/21 16:20:42 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{
	int	i;

	i = 0;

	str[i] = '\0';
}
