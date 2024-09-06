/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
    
    int LIMITE_INFERIOR, LIMITE_SUPERIOR, INTENTOS_MAXIMOS, NUMERO_ALEATORIO, ADIVINAR_NUMERO, INTENTOS_REALIZADOS;
    bool ADIVINADO;
    
    srand(time(0));

    
    //Solicitar entradas de datos
    std::cout << "Ingrese el límite inferior del rango:" << std::endl;
    std::cin >> LIMITE_INFERIOR ;
    
    std::cout << "Ingrese el límite superior del rango:" << std::endl;
    std::cin >> LIMITE_SUPERIOR ;
    
    std::cout << "Ingrese la cantidad máxima de intentos:" << std::endl;
    std::cin >> INTENTOS_MAXIMOS;
    
    //validar numeros a ingresar.
    if (LIMITE_INFERIOR >= LIMITE_SUPERIOR) {
        std::cout << "El límite inferior debe ser menor que el límite superior." << std::endl;
        return 1;
    }
    
    //funcion numeros Aleatorios
    NUMERO_ALEATORIO = rand() % (LIMITE_SUPERIOR - LIMITE_INFERIOR + 1) + LIMITE_INFERIOR;
    
    //Intentos
    INTENTOS_REALIZADOS = 0;
    ADIVINADO = false;
    
    while(INTENTOS_REALIZADOS < INTENTOS_MAXIMOS && ADIVINADO == false){
        std::cout << "Ingrese su número para adivinar (entre " << LIMITE_INFERIOR << " y " << LIMITE_SUPERIOR << "):" << std::endl;
        std::cin >> ADIVINAR_NUMERO;
        
         // Validar que el número ingresado está dentro del rango
        if (ADIVINAR_NUMERO < LIMITE_INFERIOR || ADIVINAR_NUMERO > LIMITE_SUPERIOR) {
            std::cout << "El número ingresado está fuera del rango. Intentar nuevamente." << std::endl;
            continue; // Volver al inicio del bucle sin contar el intento
        }
        
        INTENTOS_REALIZADOS++;
        
        if(ADIVINAR_NUMERO == NUMERO_ALEATORIO){
            std::cout << "¡Felicidades! Adivinaste el número." << std::endl;
            ADIVINADO = true; 
        } else {
            if(ADIVINAR_NUMERO<NUMERO_ALEATORIO){
                std::cout << "El número es mayor." << std::endl;
            } else {
                std::cout << "El número es menor." << std::endl;
            }
        }
        
        std::cout << "Intentos realizados: " << INTENTOS_REALIZADOS << "/" << INTENTOS_MAXIMOS << ". Intentos restantes: " << INTENTOS_MAXIMOS - INTENTOS_REALIZADOS << "." << std::endl;

    } 
    if(INTENTOS_REALIZADOS == INTENTOS_MAXIMOS){
        std::cout << "Lo siento, no adivinaste el número. El número era: " << NUMERO_ALEATORIO << std::endl;
    }
    return 0;
}