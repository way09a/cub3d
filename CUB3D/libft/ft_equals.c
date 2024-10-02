/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equals.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:04:59 by Ahussein          #+#    #+#             */
/*   Updated: 2023/08/05 19:05:01 by Ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_equals(const char *a, const char *b)
{
	if (a == NULL || b == NULL)
		return (0);
	while (*a && b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a == *b);
}