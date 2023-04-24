/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:47:31 by acasale           #+#    #+#             */
/*   Updated: 2023/04/11 15:50:43 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*read_file(int fd, char *result);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);
char    *ft_strchr(const char *str, int c);
char    *ft_strjoin(char const *s1, char const *s2);

#endif
