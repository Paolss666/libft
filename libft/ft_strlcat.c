/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:19:55 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 15:19:55 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
		srclen = srclen + size;
	else
		srclen = srclen + destlen;
	if (size > destlen)
	{
		while (src[i] && (destlen + 1) < size)
		{
			dest[destlen] = src[i];
			i++;
			destlen++;
		}
	}
	dest[destlen] == '\0';
	return (srclen);
}
