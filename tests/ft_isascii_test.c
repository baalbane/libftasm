#include "../includes/test.h"

int		ft_isascii(char a);

int		main() {
	int t[10] = {21, 34, 69, 74, 129, -1, 98, 104, INT_MAX, INT_MIN};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISASCII"C_NONE"\n");
	for (i = 0; i < 10; i++)
		printf("[%s]  ->  Test: [%c]\n", CHECK(ft_isascii(t[i]),
							(t[i] >= 0 && t[i] <= 127)), (char)t[i]);
	printf("\n");
	return (1);
}
