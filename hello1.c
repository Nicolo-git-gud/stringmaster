#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_printf(char*p){
	char s[strlen(p)+1], *q=s;
        strcpy(s,p);

/*** TO BE DONE START ***/int d = 0;for (int i = 0; i < strlen(p) + 1; i++){if ((s[i] < 97 || s[i] > 122) && !isspace(s[i]))d = 1;if (d == 0 && i < strlen(p) + 1){if (s[i] >= 97 && s[i] <= 122){printf("%c", s[i] - 32);d = 1;}else printf("%c", s[i]);}else printf("%c", s[i]);}printf("\n"); /*** TO BE DONE END ***/

}

int main(){
	my_printf("hello world!");
	my_printf(" how are you?");
	my_printf("  I\'m OK, thanks, and you?");
	my_printf("   1, 2, 3, testing ...");
	my_printf("\t  looks OK :-)");
	my_printf(" \t    bye bye!");
	exit(0);
}