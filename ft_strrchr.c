/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 18:36:34 by klafi             #+#    #+#             */
/*   Updated: 2025/12/05 18:59:57 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*lop;

	index = 0;
	lop = NULL;
	while (*(s + index))
	{
		if (*(s + index) == c)
			lop = (char *)(s + index);
		index++;
	}
	if (c == 0)
		lop = (char *)(s + index);
	return (lop);
}
