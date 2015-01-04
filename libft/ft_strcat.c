/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:07:43 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:35:00 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcat(char *s1, const char *s2)
{
	int				i;
	int				j;

	j = -1;
	i = -1;
	while (s1[++i])
		;
	while (s2[++j])
	{
		s1[i] = s2[j];
		++i;
	}
	s1[i] = 0;
	return (s1);
}
