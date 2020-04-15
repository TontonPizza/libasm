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

int _ft_strlen(char *s);

int main (int argc, char **argv)
{
	printf("len = %d\n", _ft_strlen("salut"));
	return (0);
}

