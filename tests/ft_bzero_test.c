#include "../includes/test.h"

int		ft_bzero(void *s, size_t n);

int		main() {
	char s1[1000];
	char s2[1000];
	int	i;

	for (i = 0; i < 1000; i++)
		s1[i] = s2[i] = rand() * 26 + 65;
	bzero(s2, 1000);
	ft_bzero(s1, 1000);
	printf("\t\t"C_BOLD""C_UNDER"Test BZERO"C_NONE"\n");
	for (i = 0; i < 1000; i++)
		if (s1[i] != s2[i])
			break ;
	if (i != 1000)
		printf("[%s] Test 1  ->  index: %d/%d\n", C_RED"FAIL"C_NONE, i, 1000);
	else
		printf("[%s] Test 1  ->  Everything is OK!\n", C_CYAN"Good"C_NONE);
	for (i = 0; i < 1000; i++)
		s1[i] = s2[i] = rand() * 26 + 65;
	bzero((void *)s2, 1000);
	ft_bzero((void *)s1, 1000);
	for (i = 0; i < 1000; i++)
		if (s1[i] != s2[i])
			break ;
	if (i != 1000)
		printf("[%s] Test 2  ->  index: %d/%d\n\n", C_RED"FAIL"C_NONE, i, 1000);
	else
		printf("[%s] Test 2  ->  Everything is OK!\n\n", C_CYAN"Good"C_NONE);
	return (1);
}
