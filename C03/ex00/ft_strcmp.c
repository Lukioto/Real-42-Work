/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:16:26 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/12 13:51:51 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}			
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d\n", ft_strcmp("same", "same"));
	printf("%d\n", ft_strcmp("zebra", "alphabet"));
	printf("%d\n", ft_strcmp("alphabet", "zebra"));
	return (0);
}*/
