#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    system("clear"); // Limpia la terminal
    int i;
    
    char mensaje1[] = "Wake up, Neo..."; // Puedes reemplazar "Neo" por cualquier nombre
    
    // Imprimir el string de a un caracter cada 50 milisegundos
    for(i = 0; mensaje1[i] != '\0'; i++) {
        putchar(mensaje1[i]);
        fflush(stdout);
        usleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    sleep(4); // Tiempo que el string permanece en la pantalla
    
    char space1[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b               ";
    for(i = 0; space1[i] != '\0'; i++) {
        putchar(space1[i]);
        fflush(stdout);
        sleep(0);
    }
    
    char a[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    for(i = 0; a[i] != '\0'; i++) {
        putchar(a[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    char mensaje2[] = "The Matrix has you...";
    for(i = 0; mensaje2[i] != '\0'; i++) {
        putchar(mensaje2[i]);
        fflush(stdout);
        usleep(250000); // Espera 50 milisegundos entre cada carácter
    }
    
    sleep(4);
    
    char space2[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                     ";
    for(i = 0; space2[i] != '\0'; i++) {
        putchar(space2[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    char b[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    for(i = 0; b[i] != '\0'; i++) {
        putchar(b[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    char mensaje3[] = "Follow the white rabbit.";
    for(i = 0; mensaje3[i] != '\0'; i++) {
        putchar(mensaje3[i]);
        fflush(stdout);
        usleep(50000); // Espera 50 milisegundos entre cada carácter
    }
    
    sleep(4);
    
    char space3[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        ";
    for(i = 0; space3[i] != '\0'; i++) {
        putchar(space3[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    char c[] = "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    for(i = 0; c[i] != '\0'; i++) {
        putchar(c[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    char mensaje4[] = "Knock, knock, Neo.";
    for(i = 0; mensaje4[i] != '\0'; i++) {
        putchar(mensaje4[i]);
        fflush(stdout);
        sleep(0); // Espera 50 milisegundos entre cada carácter
    }
    
    sleep(60);
    
    return 0;
}
