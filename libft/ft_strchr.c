/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:07:00 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/28 11:07:00 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  size_t  i;
  const char  *c_found;

  i = 0;
  c_found = NULL;
  while (s[i])
  {
    if (s[i] == c)
      c_found = &s[i];
    i++;
  }
  return ((char *)c_found);
}