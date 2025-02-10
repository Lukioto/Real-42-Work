/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:41:03 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/10 16:59:25 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char text1[] = "This will be replaced";
	char text2[] = "12345678- Only first 8 characters will copy";
	unsigned int charlimit = 8;

	printf("%s", text1);
	printf("\n%s\n", text2);
	ft_strncpy(text1, text2, charlimit);
	printf("\n%s", text1);
	printf("\n%s", text2);
}*/
