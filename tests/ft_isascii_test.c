#include "../includes/test.h"

int		ft_isascii(char a);

int		main() {
	int t[12] = {21, 34, 69, 74, 129, -1, 98, 104, INT_MAX, INT_MIN, -107374080, -107374081};
	int i;

	printf("\t\t"C_BOLD""C_UNDER"Test ISASCII"C_NONE"\n");
	for (i = 0; i < 12; i++)
		printf("[%s]  ->  Test: [%c]|[%d]\n", CHECK(ft_isascii(t[i]),
							(t[i] >= 0 && t[i] <= 127)), (char)t[i], t[i]);

	for (int j = INT_MIN/20;; j++) {
		if (ft_isascii(j) == 1) {
			printf("CANNARD %d\n", j);
			return (0);
		}
	}
	return (0);
}
