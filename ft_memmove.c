/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:36:19 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/23 10:29:32 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	size_t	arr[50];

	i = 0;
	while (i < n)
	{
		arr[i] = *(char *)src;
		src++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)dest = arr[i];
		dest++;
		i++;
	}
	return (dest - n);
}
