/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:56:05 by klafi             #+#    #+#             */
/*   Updated: 2025/12/01 14:30:46 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char	a[n];
	int	index;

	index = 0;
	while (n-- != 0)
	{
		a[index] = *(unsigned char*)(dest + index);
		index++;
	}
	return dest;
}
