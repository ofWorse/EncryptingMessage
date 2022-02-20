#include <stdio.h>
#include <string.h>
#define SIZE 256

void crypt_str(char str[], int n);

int main(void) {	
	char arr[SIZE];
	crypt_str(arr, SIZE);
}

void crypt_str(char str[], int n) {
	int i, variable, shift;
	
	puts("Enter a string:");
	fgets(str, n, stdin);
	puts("Encrypt | Decrypt? (1/2)");
	scanf("%d", &variable);
	printf("Enter a shifting step: ");
	scanf("%d", &shift);
	
	switch (variable) {
		case 1 :
			printf("Encrypted string: ");
			for(i = 0; (i < n && str[i] != '\0'); i++) {
				str[i] = str[i] + shift;
				putchar(str[i]);
			}
			puts("");
			break;
		case 2 :
			printf("Decrypted string: ");
			for(i = 0; (i < n && str[i] != '\0'); i++) {
				str[i] = str[i] - shift;
				putchar(str[i]);
			}
			puts("");
			break;
		default:
			puts("Invalid input!");
	}
}
