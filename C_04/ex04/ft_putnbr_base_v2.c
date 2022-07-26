/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_v2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:00:51 by tintran           #+#    #+#             */
/*   Updated: 2022/07/17 18:37:04 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int is_a_valid_base(char *base)
{
	int x;
	int y;

	x = 0;
	if (ft_strlen(base) < 2)
		return 0;
	while (base[x + 1])
	{
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base[y] || base[x] == '+' || base[x] == '-'
					|| base[y] =='+' || base[y] == '-' || base[x] <= ' '
					|| base[x] > 126 || base[y] <= ' ' || base[y] > 126)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	nb = (long int)nbr;
	if (!is_a_valid_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
