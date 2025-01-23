/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:50:06 by lgotoh            #+#    #+#             */
/*   Updated: 2025/01/23 16:51:19 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int main()
{
    char ch;
    
    for (ch = 'z'; ch >= 'a'; ch--)
    {
	write(1, &ch, 1);
    }
    
    return(0);
}
