/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:01:40 by klafi             #+#    #+#             */
/*   Updated: 2025/12/05 20:03:02 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		diff;

	index = 0;
	while (index < n && *(s1 + index) && *(s2 + index))
	{
		diff = *(unsigned char *)(s1 + index) - *(unsigned char *)(s2 + index);
		if (diff != 0)
			return (diff);
		index++;
	}
	if (index == n)
		return (0);
	return (*(unsigned char *)(s1 + index) - *(unsigned char *)(s2 + index));
}
