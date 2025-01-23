#include <stdio.h>
#include <string.h>

#define USUARIO_CORRECTO "admin"
#define CONTRASENA_CORRECTA "1234"

int main() {
    char usuario[50], contrasena[50];

    printf("Ingrese su nombre de usuario: ");
    fgets(usuario, sizeof(usuario), stdin);
    usuario[strcspn(usuario, "\n")] = '\0'; 
    printf("Ingrese su contrasena: ");
    fgets(contrasena, sizeof(contrasena), stdin);
    contrasena[strcspn(contrasena, "\n")] = '\0'; 
    if (strcmp(usuario, USUARIO_CORRECTO) == 0 && strcmp(contrasena, CONTRASENA_CORRECTA) == 0) {
        printf("Acceso permitido.\n");
    } else {
        printf("Acceso denegado. Usuario o contrasena incorrectos.\n");
    }

    return 0;
}

