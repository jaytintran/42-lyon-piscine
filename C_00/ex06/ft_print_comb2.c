/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:18:44 by tintran           #+#    #+#             */
/*   Updated: 2022/07/07 19:48:06 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_utility(int c, int d)
{
	char	l1a;
	char	l2a;
	char	l1b;
	char	l2b;

	l1a = c % 10 + '0';
	l2a = c / 10 + '0';
	l1b = d % 10 + '0';
	l2b = d / 10 + '0';
	write(1, &l2a, 1);
	write(1, &l1a, 1);
	write(1, " ", 1);
	write(1, &l2b, 1);
	write(1, &l1b, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	d = 1;
	while (c < 99)
	{
		ft_print_utility(c, d);
		if (d < 99)
		{
			d++;
		}
		else
		{
			c++;
			d = c + 1;
		}
		if (c != 99)
		{
			write(1, ", ", 2);
		}
	}
}
