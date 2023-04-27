/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:11:34 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 15:11:34 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char  *ft_strncat(char *dest, const char *src, size_t n)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  while (dest[i])
    dest[i++];
  while (src[j] && j < n)
  {
    dest[i++] = src[j++];
  }
  while (j < n)
    dest[i++] = '\0';
  return (dest);
}
