/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:15:32 by klafi             #+#    #+#             */
/*   Updated: 2025/12/06 18:36:26 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	len;
	size_t	index;

	len = ft_strlen((char *)s);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		*(new_str + index) = *(char *)(s + index);
		index++;
	}
	*(new_str + index) = 0;
	return (new_str);
}
