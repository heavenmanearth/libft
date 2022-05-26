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
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if ((n == 0) || (dest == src))
		return (dest);
	if (!dest && !src)
		return (0);
	if (tmp_src < tmp_dest)
	{
		while (n--)
			*(tmp_dest + n) = *(tmp_src + n);
		return (dest);
	}
	while (n--)
		*tmp_dest++ = *tmp_src++;
	return (dest);
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