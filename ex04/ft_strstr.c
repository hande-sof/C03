/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:12:40 by soilee            #+#    #+#             */
/*   Updated: 2020/07/19 20:46:21 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	int		find_count;

	tmp = to_find;
	find_count = -1;
	while (*str)
	{
		if (*str != *to_find)
		{
			find_count = -1;
			to_find = tmp;
		}
		if (*str == *to_find)
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
