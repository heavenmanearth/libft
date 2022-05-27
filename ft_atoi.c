/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
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
int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;
	int	too_much_sign_check;

	i = 0;
	result = 0;
	sign = 1;
	too_much_sign_check = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	while ((nptr[i] == '+' || nptr[i] == '-') && (too_much_sign_check < 1))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
		too_much_sign_check++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (nptr[i] - '0') + (result * 10);
		i++;
	}
	return (sign * result);
}
/*
int main()
{
	printf("%d\n", ft_atoi("  -123   45"));
	printf("%d \n", ft_atoi("--  +-12345"));	
	printf("%d \n", ft_atoi("ed-12345"));	
	printf("%d \n", ft_atoi("+de-12345"));	
	printf("%d \n", ft_atoi("12345-fr+15"));	
	printf("%d \n", ft_atoi("++--12345+e-45"));	
	printf("%d \n", ft_atoi("-12345"));	
}
*/