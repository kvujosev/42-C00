/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print revers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gitpod <gitpod@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:55:32 by gitpod            #+#    #+#             */
/*   Updated: 2021/09/10 17:55:38 by gitpod           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
}
