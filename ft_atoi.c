/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:02:22 by klafi             #+#    #+#             */
/*   Updated: 2025/12/06 16:45:20 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power(int base, int exp)
{
	int	result;

	result = 1;
	while (exp--)
		result *= base;
	return (result);
}

static int	calc_result(int num_len, char *nptr)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (index < num_len)
	{
		result += (*(nptr + index) - '0') * power(10, num_len - index - 1);
		index++;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int	num_len;
	int	index;
	int	result;
	int	neg;

	neg = 1;
	index = 0;
	num_len = 0;
	nptr = (char *)(nptr);
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	while (ft_isdigit(*(nptr + index++)))
		num_len++;
	result = calc_result(num_len, (char *) nptr);
	return (result * neg);
}
