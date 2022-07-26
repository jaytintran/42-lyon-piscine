/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:09:54 by tintran           #+#    #+#             */
/*   Updated: 2022/07/21 15:16:24 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*result;

	result = malloc(sizeof(char) * 20);
	nb = ft_atoi_base(nbr, base_from);
	if (is_valid_base(base_from) == 0 || is_valid_base(base_to) == 0)
		return (NULL);
	result = ft_putnbr_base(nb, base_to, result, 0);

	return (result);
	
}
char	*ft_putnbr_base(int nbr, char *base, char *result, int i)
{
	int		base_size;

	if (!(is_valid_base(base)))
		return (NULL);
	base_size = ft_strlen(base);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
		i = 1;
	}
	if (nbr > base_size -1)
	{
		ft_putnbr_base(nbr / base_size, base, result, i++);
		result[i] = (nbr % base_size, base);
	}
	if (nbr < base_size)
		result[i] = (ft_putnbr_base[nbr]);
}
