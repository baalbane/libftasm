#include "../includes/test.h"

int		ft_isalpha(char a);

int		main() {
	char t[8] = {'k', 'D', 'A', 'Z', 'a', 'z', '`', '{'};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISALPHA"C_NONE"\n");
	for (i = 0; i < 8; i++)
		printf("[%s]  ->  Test: %c\n", CHECK(ft_isalpha(t[i]),
			 (t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z')), t[i]);
	printf("\n");
	return (0);
}
