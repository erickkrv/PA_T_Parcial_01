#include "Ejercicio01.h"
#include <string>

#include <stdio.h>
#include <ctype.h>


using namespace std;

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Palindromo(const std::string& s, int inicio, int final) {
    if (inicio >= final) return true;

    if (s[inicio] != s[final]) return false;

    return Palindromo(s, inicio + 1, final - 1);

}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    if (length <= 1) return true;

    string oracion;
    oracion.reserve(length);

    for (int i = 0; i < length; i++) {
        char c = lower(phrase[i]); 
        if (isalnum(c)) {
            oracion.push_back(c); 
        }
    }

    return Palindromo(oracion, 0, oracion.size() - 1);
}