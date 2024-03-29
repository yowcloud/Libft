/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:12:45 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/14 19:09:02 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/* //For testing
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("Original: %c -> %c\n", 'G', ft_tolower('G'));
	printf("Ft_: %c -> %c\n", 'G', tolower('G'));
	return (0);
}*/
