#include <stdio.h>
#include <string.h>

#define MAX 100


typedef struct {
    char nombre[MAX];
    char contrasena[MAX];
} Usuario;


void registrarUsuario() {
    Usuario nuevoUsuario;

  
    printf("Introduce tu nombre: ");
    fgets(nuevoUsuario.nombre, MAX, stdin);
    nuevoUsuario.nombre[strcspn(nuevoUsuario.nombre, "\n")] = '\0';  

    printf("Introduce tu contraseña: ");
    fgets(nuevoUsuario.contrasena, MAX, stdin);
    nuevoUsuario.contrasena[strcspn(nuevoUsuario.contrasena, "\n")] = '\0';  

  
    FILE *archivo = fopen("usuarios.dat", "ab");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    
    if (fwrite(&nuevoUsuario, sizeof(Usuario), 1, archivo) != 1) {
        printf("Error al escribir en el archivo.\n");
    } else {
        printf("¡Usuario registrado exitosamente!\n");
    }

    
    fclose(archivo);
}

int main() {
    int opcion;

    while (1) {
        printf("\n1. Registrar usuario\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        getchar();  
        switch (opcion) {
            case 1:
                registrarUsuario();
                break;
            case 2:
                printf("Saliendo...\n");
                return 0;
            default:
                printf("Opción no válida, intenta nuevamente.\n");
        }
    }

    return 0;
}
