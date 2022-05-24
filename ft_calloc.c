/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
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
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			n;
	size_t			i;
	unsigned char	*temp;

	n = nmemb * size;
	i = 0;
	temp = malloc(n);
	if (!temp)
		return (0);
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/*
int main()
{
	char *s;
	s = (char *)ft_calloc(1, 2);
	s[0] = 'a';
	printf("%s", s);	// ""
	free(s);
}
*/