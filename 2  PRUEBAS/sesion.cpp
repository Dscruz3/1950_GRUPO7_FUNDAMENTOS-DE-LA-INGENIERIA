#include <stdio.h>
#include <string.h>

#define USUARIO_CORRECTO "admin"
#define CONTRASENA_CORRECTA "1234"

int main() {
    char usuario[50], contrasena[50];

    while (1) {
        printf("Ingrese su nombre de usuario: \n ");
        fgets(usuario, sizeof(usuario), stdin);
        usuario[strcspn(usuario, "\n")] = '\0'; 
        printf("Ingrese su contrasena:\n ");
        fgets(contrasena, sizeof(contrasena), stdin);
        contrasena[strcspn(contrasena, "\n")] = '\0'; 

        if (strcmp(usuario, USUARIO_CORRECTO) == 0 && strcmp(contrasena, CONTRASENA_CORRECTA) == 0) {
            printf("Acceso permitido.\n");
            break;  // Salir del bucle si las credenciales son correctas
        } else {
            printf("Acceso denegado. Usuario o contrasena incorrectos.\n");
        }
    }

    return 0;
}

