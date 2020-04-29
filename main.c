#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *dest, char *src);
int 	ft_write(int i, char *b, int nb);
int		ft_strcmp(char *a, char *b);

int main (int argc, char **argv)
{
	int a = ft_strcmp("bx", "bx");

	int b = strcmp("bx", "bx");


	printf("officiel : %d\n personnel %d\n", b, a);

	return (0);
}

