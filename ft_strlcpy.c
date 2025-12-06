/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:19:40 by klafi             #+#    #+#             */
/*   Updated: 2025/12/05 14:02:21 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	index;

	index = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	if (dsize > ft_strlen(src) + 1)
		dsize = ft_strlen(src) + 1;
	while (index < dsize - 1)
	{
		*(dst + index) = *(src + index);
		index++;
	}
	*(dst + index) = 0;
	return (ft_strlen(src));
}
