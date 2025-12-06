/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:23:58 by klafi             #+#    #+#             */
/*   Updated: 2025/12/05 20:54:06 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;
	int		diff;

	index = 0;
	while (index < n)
	{
		diff = *(unsigned char *)(s1 + index) - *(unsigned char *)(s2 + index);
		if (diff != 0)
			return (diff);
		index++;
	}
	return (0);
}
