#include <stdlib.h>

char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);
char *mx_strnew(int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strjoin(char const *s1, char const *s2) {
	char *newstr;
	int len = 0;

	if (s1 == 0 && s2 == 0) {
		return NULL;
	}
	else if (s1 == 0) {
		return mx_strdup(s2);
	}
	else if (s2 == 0) {
		return mx_strdup(s1);
	}
	else {
		len = mx_strlen(s1) + mx_strlen(s2);
		newstr = mx_strnew(len);
		newstr = mx_strcpy(newstr, s1);
		newstr = mx_strcat(newstr, s2);
		
		return newstr;
	}

	

}
