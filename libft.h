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
void				*ft_memset(void *s, int c, size_t n);

#endif
