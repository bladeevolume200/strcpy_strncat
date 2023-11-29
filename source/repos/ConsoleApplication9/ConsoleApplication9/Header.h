#pragma once
char* my_strcpy(char* p, const char* p2) {
    int i = 0;
    while ((p[i] = p2[i]) != '\0')
        ++i;
    return p;
}

char* my_strncat(char* p, const char* p2, int counter) {
    int i = 0;
    while (p[i] != '\0')
        ++i; 
    int j = 0;
    while (j < counter && p2[j] != '\0') {
        p[i] = p2[j];
        ++i;
        ++j;
    }
    p[i] = '\0'; 
    return p;
}
