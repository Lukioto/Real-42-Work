/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:27:24 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/04 14:22:38 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	stringcount;

	stringcount = 0;
	while (*str)
	{
		str++;
		stringcount++;
	}
	return (stringcount);
}

/*int main()
{
	char	epicstring[] = "There are 39 characters in this string.";
	int	count;

	count = ft_strlen(epicstring);
	printf("%d", count);  
}*/
