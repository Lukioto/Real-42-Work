/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:14 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/05 14:11:36 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
}

/*int main()
{
	char text1[] = "This will be replaced";
	char text2[] = "This will be copied";
	
	printf("%s", text1);
	printf("\n%s\n", text2);
	ft_strcpy(text1, text2);
	printf("\n%s", text1);
	printf("\n%s", text2);
}*/
