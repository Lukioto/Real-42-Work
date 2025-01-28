/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:42:37 by lgotoh            #+#    #+#             */
/*   Updated: 2025/01/28 15:26:36 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	x;
	int		n;

	n = 1;
	if (n < 0)
	{
		x = 'N';
	}
	else
	{
		x = 'P';
	}
	write(1, &x, 1);
}
