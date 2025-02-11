/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:23:10 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/03 12:12:15 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}

/*int main()
{
	int	a = 56;
	int	b = 10;
	int	olda = a;
	int	oldb = b;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d, %d, %d", olda, oldb, a, b);
}*/
