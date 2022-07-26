/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:37:55 by tintran           #+#    #+#             */
/*   Updated: 2022/07/21 15:10:18 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base(i) == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_valid_base(char *base)
{
	int	x;
	int	y;

	x = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[x + 1])
	{
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base [y] || base[x] == '+' || base[x] == '-'
					|| base[y] == '+' || base[y] == '-' || base [x] <= ' '
					|| base[y] <= ' ' || base[x] > 126 || base[y] > 126)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_length;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	base_length = ft_strlen(base);
	if (!is_valid_base(base))
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (str[i])
	{
		if (index_in_base(str[i], base) == -1)
			return (0);
		res *= base_length;
		res += index_in_base(str[i], base);
		i++;
	}
	return (res * sign);
}
