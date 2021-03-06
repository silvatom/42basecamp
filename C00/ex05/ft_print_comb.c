/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 00:59:54 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 00:59:55 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = '0';
		while (n[1] <= '8')
		{
			n[2] = '0';
			while (n[2] <= '9')
			{
				if (n[0] < n[1] && n[1] < n[2])
				{
					write(1, &n[0], 1);
					write(1, &n[1], 1);
					write(1, &n[2], 1);
					if (n[0] != '7')
						write(1, ", ", 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
