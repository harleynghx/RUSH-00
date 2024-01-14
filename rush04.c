/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hang <hang@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:56:30 by hang              #+#    #+#             */
/*   Updated: 2024/01/13 22:48:07 by hang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static	void    ft_print(int x, char start, char sep, char end)
{
	int	Xn = 1;

	while (Xn <= x)
	{
		if (Xn == 1)
			ft_putchar(start);
		else if (Xn == x)
			ft_putchar(end);
		else
			ft_putchar(sep);
		Xn++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	Yn = 1;

	while (Yn <= y)
	{
		if (Yn == 1)
			ft_print(x, 'A', 'B', 'C');
		else if (Yn == y)
			ft_print(x, 'C', 'B', 'A');
		else
			ft_print(x, 'B', ' ', 'B');
		Yn++;
	}
}