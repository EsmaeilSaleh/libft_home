/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:56:12 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/26 17:42:48 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	int tmp = c;
	if (c < 0)
		tmp *= -1;	

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == tmp)
		{
			return ((void *)s);
		}
		s++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "Hello how are you doing?";
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s\n", "The address in the array:");
	printf("%p\n", &tab[0]);
	void *c = ft_memchr(tab, -49, 7*sizeof(int));
	if (*(unsigned char *)c)
	{
		printf("%s\n", "Congratulation!");
		printf("%s\n", "We have found your char!");
		printf("%s\n", "The char is:");
		printf("%d\n",*(int *)c);
		printf("%s\n", "The address of your char is:");
		printf("%p\n",&c);
		printf("%p\n",c);
	}
	else
		printf("%s\n", "No, We don't have it!'");
	return (0);
}
