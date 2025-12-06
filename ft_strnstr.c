/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:59:07 by klafi             #+#    #+#             */
/*   Updated: 2025/12/06 16:01:26 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*find(char *big, char *little, size_t len, size_t length)
{
	size_t	index1;
	size_t	index2;
	size_t	index3;

	index1 = 0;
	while (index1 < len)
	{
		index2 = 0;
		index3 = index1;
		while (index2 < length && index3 < len)
		{
			if (*(big + index3) != *(little + index2))
				break ;
			if (index2 == length - 1)
				return (big + index3 - index2);
			index2++;
			index3++;
		}
		index1++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	length;

	length = ft_strlen(little);
	if (length == 0)
		return ((char *)big);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	return (find((char *)big, (char *)little, len, length));
}
