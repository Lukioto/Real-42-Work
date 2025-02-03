/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:27:24 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/03 14:56:50 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	stringcount;

	stringcount = strlen(str);
	return (stringcount);
}

/*int main()
{
	char	epicstring[] = "There are 39 characters in this string.";
	int	count;

	count = ft_strlen(epicstring);
	printf("%d", count);  
}*/
