#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define SULLY "#include <stdlib.h>%1$c#include <stdio.h>%1$c#include <unistd.h>%1$c#define SULLY %2$c%3$s%2$c%1$cint main()%1$c{%1$cint i = %4$d;%1$cif (!access(%2$c./Sully_5.c%2$c, R_OK) && i > 0) i--;%1$cchar fname[10];%1$csprintf(fname,%2$cSully_%%d.c%2$c,i);%1$cfprintf(fopen(fname, %2$cw%2$c),SULLY,10,34,SULLY,i);%1$cchar cmd[59];%1$csprintf(cmd,%2$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%2$c,i);%1$csystem(cmd);%1$creturn 0;%1$c}"

int main()
{
int i = 5;
if (!access("./Sully_5.c", R_OK) && i > 0) i--;
char fname[10];sprintf(fname,"Sully_%d.c",i);
fprintf(fopen(fname, "w"),SULLY,10,34,SULLY,i);
char cmd[59];sprintf(cmd,"gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d",i);system(cmd);
return 0;
}
