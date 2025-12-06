/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:28:35 by klafi             #+#    #+#             */
/*   Updated: 2025/12/04 20:26:56 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (*(s + index) != 0)
	{
		counter++;
		index++;
	}
	return (counter);
}
