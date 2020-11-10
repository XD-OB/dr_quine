#include <stdio.h>

/*
	Self Replication
*/

char	*oussama() {
char	*str = "#include <stdio.h>%1$c%1$c/*%1$c%2$cSelf Replication%1$c*/%1$c%1$cchar%2$c*oussama() {%1$cchar%2$c*str = %3$c%4$s%3$c;%1$c%2$creturn str;%1$c}%1$c%1$cint%2$c%2$cmain() {%1$c/*%1$c%2$cQuine is the Queen%1$c*/%1$c%2$cprintf(oussama(), 10, 9, 34, oussama());%1$c%2$creturn 0;%1$c}%1$c";
	return str;
}

int		main() {
/*
	Quine is the Queen
*/
	printf(oussama(), 10, 9, 34, oussama());
	return 0;
}
