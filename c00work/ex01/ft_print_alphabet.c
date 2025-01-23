/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgotoh <lgotoh@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:06:01 by lgotoh            #+#    #+#             */
/*   Updated: 2025/01/23 16:21:27 by lgotoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int main()
{
    char ch;
    
    for (ch = 'a'; ch <= 'z'; ch++)
    {
	write(1, &ch, 1);
    }
    
    return(0);
}
