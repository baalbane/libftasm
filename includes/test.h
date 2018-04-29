
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

# define MIN(a, b)	((a < b) ? a : b)
# define MAX(a, b)	((a > b) ? a : b)
# define ABS(a)		(abs(a))
# define CHECK(a, b) ((a == b) ? C_CYAN"Good"C_NONE : C_RED"Fail"C_NONE)


# define C_BOLD		"\033[1m"
# define C_NONE		"\033[0m"
# define C_CYAN		"\033[36m"
# define C_RED		"\033[31m"
# define C_UNDER	"\033[4m"