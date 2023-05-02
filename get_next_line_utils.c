/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:52:05 by acasale           #+#    #+#             */
/*   Updated: 2023/04/11 15:52:36 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		bytes;

	if (count + size < count || count + size < size)
		return (NULL);
	bytes = count * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	while (bytes --)
		((char *)ptr)[bytes] = 0;
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c] != '\0')
		c ++;
	return (c);
}

char	*ft_strchr(const char *str, int c)
{
	char	*runner;

	runner = (char *) str;
	while (*runner)
	{
		if (*runner == (char) c)
			return (runner);
		runner++;
	}
	if (*runner == (char) c)
		return (runner);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*temp;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	temp = str;
	while (*s1)
	{
		*temp = *s1;
		s1 ++;
		temp ++;
	}
	while (*s2)
	{
		*temp = *s2;
		temp ++;
		s2 ++;
	}
	*temp = '\0';
	return (str);
}
