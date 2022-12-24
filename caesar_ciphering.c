#include <stdlib.h>

size_t ft_strlen(char *str) {
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ciphering(char *str, int gap) {
	int i;
	char *new_string;
	size_t len;

	i = 0;
	len = ft_strlen(str);
	new_string = malloc(sizeof(char) * (len + 1));
	while (str[i]) {
		new_string[i] = str[i];
		if (str[i] >= 'A' && str[i] <= 'Z')
			new_string[i] = (new_string[i] - 'A' + gap) % 26 + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			new_string[i] = (new_string[i] - 'a' + gap) % 26 + 'a';
		else if (str[i] >= '0' && str[i] <= '9')
			new_string[i] = (new_string[i] - '0' + gap) % 10 + '0';
		i++;
	}
	return new_string;
}
