#include <stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter only words:(Do not add numbers!) ");
	scanf("%s", str);

	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 3;
			if(str[i] > 'Z')
				str[i] = str[i] - 26;
		}
		else if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] + 3;
			if(str[i] > 'z')
				str[i] = str[i] - 26;
		}
	}
	printf("Encrypted Word = %s"
	       , str);
}
