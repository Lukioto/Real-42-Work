/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:55:01 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/12 15:07:49 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	str1[10] = "star";
	char	str2[] = " jump";
	ft_strcat(str1, str2);
	printf("%s", str1);
	return (0);
}*/
