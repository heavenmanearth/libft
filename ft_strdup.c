/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
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
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*temp;

	i = 0;
	while (s[i])
		i++;
	temp = (char *)malloc(i + 1);
	i = 0;
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	return (temp);
}
/*
int main()
{
	char *s;
	s = ft_strdup("abcd");
	printf("%s",s);
}
*/