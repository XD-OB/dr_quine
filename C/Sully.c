int		i = 5;

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/*
	Sully Fully Mully Tully
*/

int	main() {
	char	*sully = "int%2$c%2$ci = %4$d;%1$c%1$c#include <stdlib.h>%1$c#include <stdio.h>%1$c#include <fcntl.h>%1$c%1$c/*%1$c%2$cSully Fully Mully Tully%1$c*/%1$c%1$cint%2$cmain() {%1$c%2$cchar%2$c*sully = %3$c%5$s%3$c;%1$c%1$c%2$cwhile (i-- > 0) {%1$c%2$c%2$cchar%2$cfilename[10];%1$c%2$c%2$csprintf(filename, %3$cSully_%%d.c%3$c, i);%1$c%2$c%2$cdprintf(open(filename, O_WRONLY | O_CREAT, 0644), sully, 10, 9, 34, i, sully);%1$c%2$c}%1$c%2$creturn 0;%1$c}%1$c";

	while (i-- > 0) {
		char	filename[10];
		sprintf(filename, "Sully_%d.c", i);
		dprintf(open(filename, O_WRONLY | O_CREAT, 0644), sully, 10, 9, 34, i, sully);
	}
	return 0;
}
