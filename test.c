#include <unistd.h>

int	main(void)
{
	write(1, "coucou", 6);
	write(1, "\n", 1);
}
