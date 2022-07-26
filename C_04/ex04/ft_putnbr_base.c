/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:52:10 by tintran           #+#    #+#             */
/*   Updated: 2022/07/20 14:53:15 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
int		is_base_valid(char *base);
int		is_char_plus_or_minus(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;

	if (!(is_base_valid(base)))
		return ;
	base_size = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > base_size -1)
	{
		ft_putnbr_base(nbr / base_size, base);
		ft_putnbr_base(nbr % base_size, base);
	}
	if (nbr < base_size)
		ft_putchar(base[nbr]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i ++;
		str++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (base[i])
		if (is_char_plus_or_minus(base[i++]))
			return (0);
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base [j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_char_plus_or_minus(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}
