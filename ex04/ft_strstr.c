/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:12:40 by soilee            #+#    #+#             */
/*   Updated: 2020/07/23 20:57:39 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	int		find_count;

	tmp = to_find;
	find_count = -1;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str != *to_find)
		{
			find_count = -1;
			to_find = tmp;
		}
		else if (*str == *to_find)
		{
			to_find++;
			find_count++;
			if (*to_find == '\0')
				return (str - find_count);
		}
		str++;
	}
	return (0);
}
