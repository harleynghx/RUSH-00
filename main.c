/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hang <hang@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:56:19 by hang              #+#    #+#             */
/*   Updated: 2024/01/13 20:42:31 by hang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rush(int x, int y);
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0; 
    int result = 0;
    
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result);
}

int main(int argc, char **argv)
{
    int x = ft_atoi(argv[1]);
    int y = ft_atoi(argv[2]);
    if (x >= 1 && y >= 1 )
        rush(x, y);
    return(0);
}