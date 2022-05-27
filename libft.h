/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtubtimt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:00:12 by jtubtimt          #+#    #+#             */
/*   Updated: 2022/05/19 22:36:01 by jtubtimt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
size_t				ft_strlen(const char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
char				*ft_strdup(const char *s);
int					ft_atoi(const char *nptr);


#endif
