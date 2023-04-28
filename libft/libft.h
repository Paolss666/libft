/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:20:21 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 11:20:21 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include  <io.h> 
#include  <string.h>
#include  <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int t_bool;
typedef struct s_list
{
  void          *content;
  size_t        content_size;
  struct s_list *next;
} t_list;

void  *ft_memset(void *s, int c, size_t n);
void  *ft_memcpy(void *dest, const void *src, size_t n);
void  *ft_memmove(void *dest, const void *src, size_t n);
void  ft_bzero(void *s, size_t n);
void  ft_putchar(char c);

int ft_strlen(char  *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int		ft_strlcat(char *dest, char *src, size_t size);
int ft_toupper(int c); 
int ft_tolower(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);

char  *ft_strcpy(char *dest, const char *src);
char  *ft_strncat(char *dest, const char *src, size_t n);
char  *ft_strcat(char *dest, const char *src);
char  *ft_strncpy(char *dest, const char *src, size_t n);
char  *strdup(const char *s);
char  *ft_strstr(const char *heystack, const char *needle);
char  *ft_strnstr(const char *big, const char *little, size_t len);


#endif