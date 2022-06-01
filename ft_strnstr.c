/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
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
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n_big;
	size_t	n_little;

	if (little[0] == '\0')
		return ((char *) big);
	if (big[0] == '\0' || len == 0)
		return (NULL);
	n_big = 0;
	n_little = 0;
	while (1)
	{
		if (little[n_little] == '\0')
			return ((char *)(big + n_big - n_little));
		if (big[n_big] == little[n_little])
			n_little++;
		else
		{
			n_big -= n_little;
			n_little = 0;
		}
		if (big[n_big] == '\0' || (n_big >= len && big[n_big] != '\0'))
			return (NULL);
		n_big++;
	}
}
/*
int main()
{
	char big[] = "abcdef";
	char little[] = "bcd";
	char *p = ft_strnstr(big, little, 4);
	printf("%s", p);	// "bcdef"
}
*/