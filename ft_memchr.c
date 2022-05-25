/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtubtimt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:17:29 by jtubtimt          #+#    #+#             */
/*   Updated: 2022/05/16 21:21:18 by jtubtimt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
// c has 4 bytes;
// *s in 1 element has 1 byte
// so we need to cast it to 1 byte.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*temp;
	size_t				i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return (temp + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "abcdef";
	char *t;
	t = (char *)ft_memchr(s, 'b', 4);
	printf("%s", t);	// bcdef
}
*/