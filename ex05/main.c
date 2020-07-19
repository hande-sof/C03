/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 21:16:36 by soilee            #+#    #+#             */
/*   Updated: 2020/07/19 22:30:47 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	tft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char dest1[50] = "abc";
	char dest2[50] = "abc";
	char src[] = "012309383";
	unsigned int size = 1;
	printf("%s, %u\n%s, %lu\n", dest1, tft_strlcat(dest1, src, size), dest2, strlcat(dest2, src, size));
	return (0);
}
