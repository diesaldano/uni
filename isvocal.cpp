/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    char letra;
    
    std::cout<<"Ingrese una letra: " << std::endl ;
    std::cin >> letra;
    
    switch(letra){
        case'a':
        case'A':
          std::cout << "Has ingresado una vocal " << letra << std::endl;
            break;
        
        case'e':
        case'E':
            std::cout << "Has ingresado una vocal " << letra << std::endl;
            break;
        
        case'i':
        case'I':
            std::cout << "Has ingresado una vocal " << letra << std::endl;
            break;
        
        case'o':
        case'O':
            std::cout << "Has ingresado una vocal " << letra << std::endl;
            break;
        
        case'u':
        case'U':
            std::cout << "Has ingresado una vocal " << letra << std::endl;
            break;
        
        default:
            std::cout << "No has ingresado una vocal, ingresaste: " << letra << std::endl; 
        
    }
 
    return 0;
}