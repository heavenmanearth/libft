/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
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
int	ft_char_cmp(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	return (0);
}

static size_t	ft_num_of_groups(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (i < ft_strlen(s) && s[i])
	{
		while (ft_char_cmp(s[i], c) && s[i])
			i++;
		if (!ft_char_cmp(s[i], c) && s[i])
			counter++;
		while (!ft_char_cmp(s[i], c) && s[i])
			i++;
	}
	return (counter);
}

char	*ft_put_in_group(char const *s, size_t start, size_t size)
{
	char	*result;
	size_t	i;

	result = malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size && s[start])
	{
			result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	size;
	char	**result;

	i = ft_num_of_groups(s, c);
	result = malloc((i + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (s[start] && start < ft_strlen(s))
	{
		size = 0;
		while (ft_char_cmp(s[start], c) && s[start])
			start++;
		while (!ft_char_cmp(s[start + size], c) && s[start + size])
			size++;
		if (size != 0)
			result[i++] = ft_put_in_group(s, start, size);
		start = start + size;
	}
	result[i] = NULL;
	return (result);
}
