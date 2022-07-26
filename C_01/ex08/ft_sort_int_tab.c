/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:42:21 by tintran           #+#    #+#             */
/*   Updated: 2022/07/11 14:13:34 by tintran          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while(i < size - 1)
	{
		if (tab[i] > tab [i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			if (i > 0)
				i--;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	int tab[] = {4, 3, 5, 2, 7, -3, 10};
	ft_sort_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
