/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:13:11 by soilee            #+#    #+#             */
/*   Updated: 2020/07/14 21:54:18 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0')
			return (-1);
		else if (s2[i] == '\0')
			return (1);
		else if ((str_len(s1) == str_len(s2)) && (s1[i] != s2[i]))
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
