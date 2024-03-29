/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:13:12 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 20:10:37 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* //For testing
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'a';
		if (ft_isprint(c))
			printf("'%c' Is printable\n", c);
		else
			printf("'%c' Not printable\n", c);
	return (0);
}
*/
