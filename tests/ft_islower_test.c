#include "../includes/test.h"

int		ft_islower(char a);

int		main() {
	char t[8] = {'.', 'D', 'A', 'Z', 'a', 'z', '`', '{'};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISLOWER"C_NONE"\n");
	for (i = 0; i < 8; i++)
		printf("[%s]  ->  Test: %c\n", CHECK(ft_islower(t[i]),
											 (t[i] >= 'a' && t[i] <= 'z')), t[i]);
	printf("\n");
	return (0);
}
