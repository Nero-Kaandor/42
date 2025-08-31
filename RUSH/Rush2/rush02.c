/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catsin-k <catsin-k@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:57:59 by catsin-k          #+#    #+#             */
/*   Updated: 2025/08/31 15:22:37 by catsin-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprime_forme(int x, int y, int l, int h)
{
	while (h <= y)
	{
		while (l <= x)
		{
			if ((l == 1 || l == x) && h == 1)
				ft_putchar('A');
			else if (h == y && (l == 1 || l == x))
				ft_putchar('C');
			else if ((h == 1 || h == y) && (l > 1 && l < x))
				ft_putchar ('B');
			else if ((l == 1 || l == x) && (h > 1 && h < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		h++;
		l = 1;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	h;

	if (x <= 0 || y <= 0)
		return ;
	l = 1;
	h = 1;
	imprime_forme(x, y, l, h);
}
