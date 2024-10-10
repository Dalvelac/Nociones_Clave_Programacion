#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    char genero;
} Persona;

typedef struct {
    Persona persona;
    char curso[20];
} Estudiante;

void setNombre(Persona *p, const char *nombre) {
    strncpy(p->nombre, nombre, sizeof(p->nombre) - 1);
    p->nombre[sizeof(p->nombre) - 1] = '\0';
}

void setEdad(Persona *p, int edad) {
    p->edad = edad;
}

void setGenero(Persona *p, char genero) {
    p->genero = genero;
}

void setCurso(Estudiante *e, const char *curso) {
    strncpy(e->curso, curso, sizeof(e->curso) - 1);
    e->curso[sizeof(e->curso) - 1] = '\0';
}

void mostrarDetalles(Persona *p, Estudiante *e) {
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %d\n", p->edad);
    printf("Genero: %c\n", p->genero);
    printf("Curso: %s\n", e->curso);
}

#include "persona.h"
int main() {
    Persona p;
    Estudiante e;

    setNombre(&p, "Juan");
    setEdad(&p, 20);
    setGenero(&p, 'M');
    setCurso(&e, "Programacion");

    mostrarDetalles(&p, &e);

    return 0;
}