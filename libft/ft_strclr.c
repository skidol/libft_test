/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 21:44:32 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:37:22 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				ft_strclr(char *s)
{
	int				i;

	i = -1;
	if (s == NULL)
		return ;
	while (s[++i])
		s[i] = 0;
}
