#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)

int		i = 5;

/*
	Sully Fully Mully Tully
*/

void	compile() {
	char	cmd[59];
	sprintf(cmd, "gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
	system(cmd);
}

int	main() {
	if (i >= 0) {
		if (!access("Sully_5.c", R_OK)) i--;
		char	*sully = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c%1$c#define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)%1$c%1$cint%2$c%2$ci = %4$d;%1$c%1$c/*%1$c%2$cSully Fully Mully Tully%1$c*/%1$c%1$cvoid%2$ccompile() {%1$c%2$cchar%2$ccmd[63];%1$c%2$csprintf(cmd, %3$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%3$c, i);%1$c%2$csystem(cmd);%1$c}%1$c%1$cint%2$cmain() {%1$c%2$cif (i >= 0) {%1$c%2$c%2$cif (!access(%3$cSully_5.c%3$c, R_OK)) i--;%1$c%2$c%2$cchar%2$c*sully = %3$c%5$s%3$c;%1$c%2$c%2$cchar%2$cfilename[10];%1$c%2$c%2$csprintf(filename, %3$cSully_%%d.c%3$c, i);%1$c%2$c%2$cdprintf(OPEN(filename), sully, 10, 9, 34, i, sully);%1$c%2$c%2$cif (i > 0) compile();%1$c%2$c}%1$c%2$creturn 0;%1$c}%1$c";
		char	filename[10];
		sprintf(filename, "Sully_%d.c", i);
		dprintf(OPEN(filename), sully, 10, 9, 34, i, sully);
		if (i > 0) compile();
	}
	return 0;
}
