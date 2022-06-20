/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
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
size_t	ft_space_size(char const *str, unsigned int start, size_t length)
{
	if ((start + length) < ft_strlen(str))
		return (length + 1);
	return (ft_strlen(str) - start + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start < ft_strlen(s))
	{
		substr = malloc((ft_space_size(s, start, len)) * sizeof(char));
		if (!substr)
			return (NULL);
		while (i < len && s[i + start])
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	else
		substr = malloc(sizeof(char));
	if (!substr)
		return (NULL);
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char const *s;

	s = "test ft_substr";
	unsigned int start = 0;
	size_t len = 5;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
