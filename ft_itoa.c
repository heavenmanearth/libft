/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
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
char	*ft_put_neg(int n, int position, char *str)
{
	while (position)
	{
		str[position - 1] = '0' - (n % 10);
		n /= 10;
		position--;
	}
	return (str);
}

char	*ft_put_pos(int n, int position, char *str)
{
	while (position)
	{
		str[position - 1] = (n % 10) + '0';
		n /= 10;
		position--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	i;
	int		digit;
	char	*str;

	i = 10;
	digit = 1;
	while (n / i)
	{
		i *= 10;
		digit++;
	}
	if (n < 0)
		digit += 1;
	str = malloc((digit + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str[digit] = '\0';
	if (n >= 0)
		str = ft_put_pos(n, digit, str);
	else
	{
		str = ft_put_neg(n, digit, str);
		str[0] = '-';
	}
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-1000235));
	printf("%s\n",ft_itoa(-14586));
	printf("%s\n",ft_itoa(-1010));
	printf("%s\n",ft_itoa(-1));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(10));
	printf("%s\n",ft_itoa(1010));
	printf("%s\n",ft_itoa(1005000));
	printf("%s\n",ft_itoa(2147483647));
	return (0);
}
*/