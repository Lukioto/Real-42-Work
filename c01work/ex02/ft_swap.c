/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:56:22 by lgotoh            #+#    #+#             */
/*   Updated: 2025/01/30 14:28:10 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	a* = b*;
	b* = temp;
}	

int main(void)
{	
	int	num1 = 10;
	int	num2 = 20;
	int	*ptr1 = &num1;
	int	*ptr2 = &num2;
	printf("%d", num1);
	printf("\n%d\n", num2);
	ft_swap(*ptr1, *ptr2);
	printf("%d", num1);
	printf("\n%d\n", num2);
	return (0);
}
