/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:09 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/05 13:43:38 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_len;

	total_len = nmemb * size;
	ptr = malloc(total_len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_len);
	return (ptr);
}
