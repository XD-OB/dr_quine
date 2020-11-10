#include <fcntl.h>
#include <stdio.h>

/*
	My little Grace
*/

#define OPEN(file) open(file, O_WRONLY | O_CREAT, 0644)
#define GRACE "#include <fcntl.h>%2$c#include <stdio.h>%2$c%2$c/*%2$c%3$cMy little Grace%2$c*/%2$c%2$c#define OPEN(file) open(file, O_WRONLY | O_CREAT, 0644)%2$c#define GRACE %1$c%4$s%1$c%2$c#define FT(x) int main() { dprintf(OPEN(%1$cGrace_kid.c%1$c), x, 34, 10, 9, x); return 0 }%2$c%2$cFT(GRACE)%2$c"
#define FT(x) int main() { dprintf(OPEN("Grace_kid.c"), x, 34, 10, 9, x); return 0 }

FT(GRACE)
