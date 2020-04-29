#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_strdup(char *s);
int		ft_strlen(char *s);
char	*ft_strcpy(char *dest, char *src);
int 	ft_write(int i, char *b, int nb);
int		ft_strcmp(char *a, char *b);
int		ft_read(int fd, char *buffer, int size);

void	test_strdup()
{
	char *s;
	s = ft_strdup("salut les copains");
	printf("%s\n", s);
	free(s);
}

void	test_write()
{
	int r = ft_write(1, "salut\n", 6);
	printf("\nreturn value : %d\n", r);
	ft_write(-1, "toto", 4);
	printf("\nerrno : %d\n", errno);
	ft_write(1, 0, 1);
	printf("\nerrno : %d\n", errno);
}

void	test_read()
{
	char b[32];
	int fd = open("doc/notes.txt", O_RDONLY);

	ft_read(fd, b, 10);
	ft_write(1, b, 10);
}

int main (int argc, char **argv)
{
	test_read();

	return (0);
}

