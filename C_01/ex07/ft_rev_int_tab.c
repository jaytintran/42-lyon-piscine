/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:36:56 by tintran           #+#    #+#             */
/*   Updated: 2022/07/09 18:41:07 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:24:21 by tintran           #+#    #+#             */
/*   Updated: 2022/07/09 18:36:50 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	i = 0;
	x = size - 1;
	tmp = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[x - i];
		tab[x - i] = tmp;
		i++;
	}
}
