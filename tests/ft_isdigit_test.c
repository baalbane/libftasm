#include "../includes/test.h"

int		ft_isdigit(char a);

int		main() {
	char t[10] = {'\0', '/', '0', ':', '9', '5', 'A', 'z', '&', '-'};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISDIGIT"C_NONE"\n");
	for (i = 0; i < 10; i++)
		printf("[%s]  ->  Test: [%c]\n", CHECK(ft_isdigit(t[i]),
								 (t[i] >= '0' && t[i] <= '9')), t[i]);
	printf("\n");
	return (1);
}
