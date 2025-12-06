/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:50:12 by klafi             #+#    #+#             */
/*   Updated: 2025/12/06 18:33:27 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size == 0 || n == 0)
		ptr = malloc(0);
	else
	{
		ptr = malloc(size * n);
		ft_bzero(ptr, size * n);
	}
	return ptr;
}

int main(void)
{
	size_t x = 4294967300;// a value greater than 2^32
	printf("%ld \n",x);

	char *meow = calloc(x, 1);
	if (meow == NULL)
		printf("meow is NULL for calloc\n");
	else
		printf("with calloc :    %d\n" , *(unsigned char *)(meow));
	free(meow);
	meow = ft_calloc(x , 1);
	if (meow == NULL)
		printf("meow is NULL for ft_calloc\n");
	else
		printf("with ft_calloc :    %d\n" , *(unsigned char *)(meow));
	free (meow);
	return (0);
}
