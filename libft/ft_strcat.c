/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:07:24 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 15:07:24 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char  *ft_strcat(char *dest, const char *src)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j])
  {
    dest[i++] = src[j++];
  }
  dest[i] = '\0';
  return (dest);
}