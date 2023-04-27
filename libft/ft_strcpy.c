/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:53:51 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 14:53:51 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strcpy(char *dest, const char *src)
{
  size_t  i;
  size_t  len;

  len = ft_strlen(src);
  i = 0;

  while (i < len)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}