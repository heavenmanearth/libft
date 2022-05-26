/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
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
*/
void	*src_desc(unsigned char *dest, unsigned char *src, size_t i, size_t n)
{
	while (n - 1 <= i)
	{
		dest[n] = (unsigned char)src[n];
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = 0;
	if ((n == 0) || (dest == src))
		return (dest);
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		tmp_dest = src_desc(tmp_dest, tmp_src, i, n);
		return (tmp_dest);
	}
	while (i < n)
	{
		tmp_dest[i] = (unsigned char)tmp_src[i];
		i++;
	}
	return (tmp_dest);
}
/*
int main()
{
	char s[] = "abcdef";
	char d[]= "xxxxxx";
	char *p;
	p = ft_memmove(s,d,3);
	printf("%s", p);	// xxxdef
}
*/