/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:46:54 by soilee            #+#    #+#             */
/*   Updated: 2020/07/21 19:24:02 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	str_i;
	unsigned int	dest_i;

	if (str_len(dest) > size)
		str_i = str_len(src) + size;
	else if (str_len(dest) <= size)
		str_i = str_len(dest) + str_len(src);
	dest_i = str_len(dest);
	while (dest_i < size)
	{
		if (*(dest + dest_i) == '\0' && dest_i < size - 1)
		{
			*(dest + dest_i) = *src;
			src++;
		}
		else if (dest_i == size)
			*(dest + dest_i) = '\0';
		dest_i++;
	}
	return (str_i);
}
