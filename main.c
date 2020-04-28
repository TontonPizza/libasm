/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:50:16 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/07 11:50:16 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int		ft_strlen(char *s);
char	*ft_strcpy(char *dest, char *src);

int main (int argc, char **argv)
{


	char *d = malloc(sizeof(char) * 10);

	ft_strcpy(d, "");


	printf("%s\n", d);

	return (0);
}

