# #include <iostream>

using namespace std;
int strlen(char *s){
    char *i = s;
    for (;*s++ != '\0';);
    return s - i;
}
