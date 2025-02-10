/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:28:59 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/06 13:57:41 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_alpha("0 expected"));
	printf("\n%d", ft_str_is_alpha("OneExpeced"));
}*/
