/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:35:30 by tintran           #+#    #+#             */
/*   Updated: 2022/07/13 12:00:56 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (!n)
		return (0);
	if (s1[i] != '\0')
	{
		while ((s1[i] && s2[i] && s1[i] == s2[i]) && i < n - 1)
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}
