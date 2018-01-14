/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:14:16 by dseabela          #+#    #+#             */
/*   Updated: 2018/01/14 11:26:56 by dseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush03(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i++ <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && x != 1 && y != 1))
				ft_putchar('A');
			else if ((i == y && j == 1 && y != 1))
				ft_putchar('C');
			else if ((i == y && j == 1 && y != 1))
					ft_putchar('A');
			else if (i == 1 && j == x && y != 1)
				ft_putchar('C');
			else if (i == 1 && j == x && y != 1)
				ft_putchar('C');
			else if ((i == 1 || i == y) && j > 1)
				ft_putchar('B');
			else if ((j == 1 || j == x) && i > 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
