#include <unistd.h>
void ft_print_alphabet(void){
	char start = 'a';
	for(char i = 0; i < 26; i++){
		write(1, &start, 1);
		start++;
	}
}

