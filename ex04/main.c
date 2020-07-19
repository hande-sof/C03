/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:21:15 by soilee            #+#    #+#             */
/*   Updated: 2020/07/19 20:40:32 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[30] = "apapple";
	char to_find[10] = "app";

	printf("%s\n%s\n", ft_strstr(str, to_find), strstr(str, to_find));

	return (0);
}
