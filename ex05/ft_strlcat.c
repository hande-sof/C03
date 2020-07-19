/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:46:54 by soilee            #+#    #+#             */
/*   Updated: 2020/07/19 22:42:28 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	src_len(char *str, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	if (i > size)
		return size;
	else
		return i;
}

unsigned int	dest_len(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_i;
	
	i = 0;
	str_i = dest_len(dest) + src_len(src, size);
	size -= 1;
	while (i <= size)
	{
		if (dest_len(dest) > size)
			break;
		else if (*(dest + i) == '\0' && i < size)
		{
			*(dest + i) = *src;
			src++;
		}
		else if (i == size)
			*(dest + i) = '\0';
		i++;
	}
	return (str_i);
}
