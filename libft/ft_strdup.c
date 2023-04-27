/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:03:43 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 15:03:43 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *strdup(const char *s)
{
  int size;
  char  *snew;

  snew = NULL;
  size = 0;
  while (s[size])
  {
    size++;
  }
  snew = (char *)malloc(size * sizeof(char) + 1);
  if (!snew)
    return (NULL);
  ft_strcpy(snew, s);
  return (snew);
}