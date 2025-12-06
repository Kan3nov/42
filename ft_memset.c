/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:39:04 by klafi             #+#    #+#             */
/*   Updated: 2025/12/04 20:21:45 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (n > 0)
	{
		*(unsigned char *)(s + index) = c;
		index++;
		n--;
	}
	return (s);
}
