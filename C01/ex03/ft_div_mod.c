/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:22:44 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/03 11:21:06 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int	a = 23;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d, %d, %d", a, b, div, mod);
}*/
