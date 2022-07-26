/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:50:36 by tintran           #+#    #+#             */
/*   Updated: 2022/07/08 10:01:07 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char c, char d, char u);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '0';
	u = '0';
	print_comb(c, d, u);
}

void	print_comb(char c, char d, char u)
{
	while (c != '8')
	{
		if (u != d && u != c && d != c && d > c && u > d)
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, &u, 1);
			if (c != '7')
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
		u++;
		if (u > '9')
		{
			u = '0';
			d++;
		}
		if (d > '9')
		{
			d = '0';
			c++;
		}
	}
}
