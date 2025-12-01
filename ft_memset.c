/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:39:04 by klafi             #+#    #+#             */
/*   Updated: 2025/12/01 12:44:16 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	index;

	index = 0;
	while (n > 0)
	{
		*(int*)(s+index) = c;
		index++;
		n--;
	}
	return (s);
}
