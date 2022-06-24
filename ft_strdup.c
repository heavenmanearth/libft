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
	int		i;
	char	*temp;

	temp = (char *)malloc(ft_strlen((char *)s) + 1);
	if (temp == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		temp[i] = s[i];
	temp[i] = '\0';
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