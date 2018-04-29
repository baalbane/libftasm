#include "../includes/test.h"

int		ft_isupper(char a);

int		main() {
	char t[8] = {'.', 'D', 'A', 'Z', 'a', 'z', '@', '['};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISUPPER"C_NONE"\n");
	for (i = 0; i < 8; i++)
		printf("[%s]  ->  Test: %c\n", CHECK(ft_isupper(t[i]),
											 (t[i] >= 'A' && t[i] <= 'Z')), t[i]);
	printf("\n");
	return (1);
}
