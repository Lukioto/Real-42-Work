/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:30:04 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/13 12:20:33 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0' && counter < nb)
	{
		dest[i] = *src++;
		i++;
		counter++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	str1[30] = "star ";
	char	str2[] = "12345 only first 5 characters will be appended";

	ft_strncat(str1, str2, 5);
	printf("%s", str1);
	return (0);
}*/
