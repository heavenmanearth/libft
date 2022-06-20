/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
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
size_t	ft_end_index(char const *s, char const *set)
{
	size_t	len;

	len = ft_strlen(s);
	while (ft_strrchr(set, s[len]) && len)
		len--;
	return (len);
}

size_t	ft_start_index(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strrchr(set, s[i]) && s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_start_index(s1, set);
	j = ft_end_index(s1, set) + 1;
	k = 0;
	if (j != 0 && i < j && *s1)
	{
		result = malloc(((j - i) + 1) * sizeof(char));
		if (!result)
			return (NULL);
		while (i < j)
			result[k++] = s1[i++];
		result[k] = '\0';
		return (result);
	}
	result = malloc(sizeof(char));
	if (!result)
		return (NULL);
	result[0] = 0;
	return (result);
}
/*
int	main(void)
{
	char * p = ft_strtrim("123", "");
	char * s = ft_strtrim("abcdba", "acb");
	char * str = ft_strtrim("tripouille", " x");
	printf("%s\n", p);
	printf("%s\n", s);
	printf("%s\n", str);
	return (0);
}*/