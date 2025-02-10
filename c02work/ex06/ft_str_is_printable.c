/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:29:11 by lgotoh            #+#    #+#             */
/*   Updated: 2025/02/10 14:06:14 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_str_is_printable("these characters are all printable"));
	printf("%d\n", ft_str_is_printable( "the € character is not printable"));
	printf("%d", ft_str_is_printable(""));

}*/
