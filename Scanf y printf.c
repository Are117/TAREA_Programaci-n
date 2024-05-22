#include <stdio.h>//Se incluye libreria estandar de funciones de entrada y salida 
/*scanf
Esta función permite ingresar datos por teclado y almacenarlos en determinadas variables.
La función debe incluir 2 parámetros. El primero es una o varias marcas de tipo de dato y la variable donde se almacenará
el valor. 
En caso de utilizar varias marcas en una misma línea, deberan estar separadas por un espacio.
Algunas marcas en scanf son: "%c" para un caracter, "%i" para un entero, "%f" para decimales, "%s" para cadena 
de caracteres y deben ir entre comillas.
Las variables deberan comenzar con el símbolo "&" e ir separadas por comas.
Ejemplo:

#include <stdio.h>
int main(){
    int variable1, variable2;
    printf("Ingrese 2 números enteros\n");
    scanf("%i\n %i", &variable1, &variable2);
    printf("%d, %d", variable1, variable2);
    return 0;
    }
El ejemplo anterior permite ingresar 2 números y luego imprimirlos en pantalla.
*/

/*printf
Esta función imprime un mensaje por pantalla utilizando. 
Usa una "cadena de formato" que integra instrucciones para mezclar
múltiples cadenas en la cadena final a mostrar por pantalla.
Para usar esta función, es necesario escribir el texto literal que se va
a imprimir seguido de marcas de formato y luego los parámetros de donde
se obtendran dichas marcas.
El símbolo "%" representa el comienzo de una marca de formato
Las marcas deben tener una estructura que incluya:parameter, flags, width,
precision, length, type.
De momento solo detallaré algunos tipos de marcas con type.
Para presentar un entero la marca será "%d", para un flotante "%f", para 
un caracter "%c", para una cadena de caracteres "%s".

Ahora un ejemplo con printf para enteros, cadena de caracteres y flotantes:

#include <stdio.h>
int main(){
    int edad=18;
    char caracter='a';
    float meses=3.4;
printf("El nombre del usuario es: %c\n", caracter);
    printf("La edad del usuario es: %d\n", edad);
    printf("El número de meses del usuario es de: %f\n", meses);

    return 0;
}



/*TIPOS DE DATOS
C ofrece 3 tipos de datos básicos:
    Números Enteros:
    Se definen con la palabra int y sirve para expresar números enteros
    Caracteres:
    Se definen con la palabra char y sirve para expresar letras o caracteres
    Números decimales:
    Se clasifican y definen en 2 grupos:
        Float: Trabaja con precisión números que contengan de 6 a 7 decimales
        Double: Trabaja con una precisión de 14 a 16 decimales
*/

/*DECLARACIÓN DE VARIABLES
Una variable es un espacio en la memoria Ram de nuestro ordenador donde podemos
guardar información.
En C, es necesario declarar una variable antes de su uso.
Para declarar una variable debemos definirla con un tipo y un identificador(nombre para la variable).
Además, luego de cada variable debemos colocar un punto y coma para indicarle al compilador que la instrucción ha terminado.
Por ejemplo:

#include <stdio.h>
int main(){
    int numero;
    char inicial;
    float decimal;
    return 0;
}
En el ejemplo anterior la primera variable es de tipo entero y su nombre es "número1", la segunda es de tipo caracter y su nombre es "inicial"
y asi con todas las demás.
*/

int main(){//Coloco la función principal, todo algoritmo en C debe tener una
    int edad;//Defino la variable "edad" como entero
    char inicial;//Defino la variable "inicial" como caracter
    float peso;//Defino la variable "peso" como decimal

    printf("Bienvenido al programa\n Por favor, ingrese su edad, la inicial de su apellido y su peso en libras\n");//Uso la función prinft para dar la bienvenida al programa y pido al usuario que ingrese los datos
    scanf("%i\n %c\n %f", &edad, &inicial, &peso);//Uso la función scanf para que el usuario ingrese los valores por teclado, utilizo saltos de línea para que comience una nueva línea al dar enter y almaceno los valores ingresados en las variables anteriormente declaradas.

    printf("El número que ingresó es: %d\n", edad);//La función printf me permite mostrar el entero ingresado
    printf("La inicial que ingresó es: %c\n", inicial);//La función printf me permite mostrar el caracter ingresado
    printf("La inicial que ingresó es: %.2f\n", peso);//La función printf me permite mostrar el decimal ingresado y coloco el ".2" para que solo tome en cuenta 2 decimales.

    return 0;

}