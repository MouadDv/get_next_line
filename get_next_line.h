/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 05:08:48 by milmi             #+#    #+#             */
/*   Updated: 2019/11/22 05:08:50 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen(const char *str);
void			*ft_memcpy(void *dest, char *src, size_t n);
char			*ft_strjoin(char **s1, char **s2);
char			*ft_strchr(const char *s, int c);
int				get_next_line(int fd, char **line);
char			*ft_strdup(char *str1);
#endif
