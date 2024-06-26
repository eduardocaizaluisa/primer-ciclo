//El siguiente  programa calcula el indice de masa corporal (IMC) a partir del peso y la altura ingresados por el usuario:
    
#include <stdio.h>

int main() {
    // Declaracion de variables
    float peso, altura, imc;
    char nombre[20]; // Usamos un arreglo de caracteres para almacenar el nombre del usuario
    int edad;

    // Se puede observarque se usa  printf para hacer que se muestre en pantalla el mensaje
    printf("Bienvenido al calculador de indice de masa corporal (IMC).\n");

    // le pide  al usuario que ingrese su nombre
    printf("Por favor, ingresa tu nombre: ");

    // Aqui se puede observar que scanf se utiliza  para  guardar en memoria la variable nombre
    scanf("%s", nombre); // Leemos el nombre del usuario como una cadena de caracteres

    printf("Por favor, ingresa tu edad: ");
    scanf("%d", &edad);  // Leemos la edad del usuario como un numero entero

    printf("Por favor, ingresa tu peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Por favor, ingresa tu altura en metros: ");
    scanf("%f", &altura);

    // Calcular el indice de masa corporal (IMC)
    imc = peso / (altura * altura);

    // Mostrar el resultado
    printf("\n%s, de %d anos, tu indice de masa corporal (IMC) es: %.2f\n", nombre, edad, imc);

    return 0;
}
