/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:41:03 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/05 14:08:22 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char	*dest, char *src, unsigned int n)
{
	int	count;

	count = 0;
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		*dest++;
		*src++;
		count++;
	}
}

/*int main()
{
	char text1[] = "This will be replaced";
	char text2[] = "12345678- Only first 8 characters will copy";
	unsigned int charlimit = 8;

	printf("%s", text1);
	printf("\n%s\n", text2);
	ft_strcpy(text1, text2, charlimit);
	printf("\n%s", text1);
	printf("\n%s", text2);
}*/
