#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1=0; // Variable del valor a
    float num2=0; // Variable del valor b
    float sumaRes; // Resultado suma
    float restaRes; // Resultado resta
    float divisionRes; // Resultado division
    float multiplicacionRes; // Resultado multiplicacion
    float factorialRes; // Resultado factorial
    float factorialAux; // Auxiliar para validar un error en factorial
    int flagNum1=0; // Bandera para saber si se ingreso el numero a
    int flagNum2=0; // Bandera para saber si se ingreso el numero b
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (a=x)\n");
        printf("2- Ingresar 2do operando (b=y)\n");
        printf("3- Calcular la suma (a+b)\n");
        printf("4- Calcular la resta (a-b)\n");
        printf("5- Calcular la division (a/b)\n");
        printf("6- Calcular la multiplicacion (a*b)\n");
        printf("7- Calcular el factorial (a!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: // Ingresar 1er operando
                num1=getFloat("Ingrese el 1er operando: \n");
                flagNum1=1;
                printf("a=%.2f\n",num1);
                break;
            case 2: // Ingresar 2do operando
                num2=getFloat("Ingrese el 2do operando: \n");
                flagNum2=1;
                printf("b=%.2f\n",num2);
                break;
            case 3: // Calcular la suma
                if(flagNum1==1 && flagNum2==1)
                {
                    sumaRes=sumar(num1,num2);
                    printf("a+b= %.2f\n",sumaRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {
                    printf("ERROR,Falta ingresar el algun operando (a) o (b)\n");
                }
                break;
            case 4: // Calcular la resta
                if(flagNum1==1 && flagNum2==1)
                {
                    restaRes=restar(num1,num2);

                    printf("a-b=[%.2f]\n",restaRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (a) o (b)\n");

                }
                break;
            case 5: // Calcular la division (A/B)
                if(flagNum1==1 && flagNum2==1)
                {
                    if (num2==0)
                    {

                        printf("ERROR, Imposible division por 0\n");

                    }
                    else
                    {
                        divisionRes=dividir(num1,num2);

                        printf("a/b=[%.2f]\n",divisionRes);

                    }
                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (a) o (b)\n");

                }
                break;
            case 6: //Calcular la multiplicacion
                if(flagNum1==1 && flagNum2==1)
                {
                multiplicacionRes=multiplicar(num1,num2);

                printf("a*b=%.2f \n",multiplicacionRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (a) o (b)\n");

                }
                break;
            case 7: // Calcular el factorial
                if(flagNum1==1)
                {
                    if (num1>20)
                    {

                        printf("ERROR.Numero demasiado grande\n Por favor ingrese un numero menor a 20 para calcular a!");

                    }
                    else if(num1<0)
                    {

                        printf("ERROR, Ingreso un numero negativo\n");

                    }
                    else
                    {
                        factorialAux = num1-(int)num1;
                        if (factorialAux==0)
                        {
                            factorialRes=factorial(num1);

                            printf("a!= %.2f \n",factorialRes);

                        }
                        else
                        {

                            printf("ERROR, Imposible factorear es un numero decimal\n");

                        }
                    }

                }
                else
                {

                    printf("ERROR,Falta ingresar el primer operando (a)\n");

                }
                break;
            case 8: // Calcular todas las operaciones
                if(flagNum1==1 && flagNum2==1)
                {
                    sumaRes=sumar(num1,num2);

                    printf("a+b= %.2f \n",sumaRes);

                    restaRes=restar(num1,num2);

                    printf("a-b= %.2f\n",restaRes);

                    if (num2==0)
                    {

                        printf("ERROR, Imposible division por 0\n");

                    }
                    else
                    {
                        divisionRes=dividir(num1,num2);

                        printf("a/b = %.2f \n",divisionRes);

                    }
                    multiplicacionRes=multiplicar(num1,num2);

                    printf("a*b = %.2f \n",multiplicacionRes);

                    if (num1>20)
                    {

                        printf("ERROR,Numero demasiado grande\nPor favor ingrese un numero menor a 20 para calcular A!");

                    }
                    else if(num1<0)
                    {

                        printf("ERROR, Ingreso un numero negativo\n");

                    }
                    else
                    {
                        factorialAux= num1-(int)num1;
                        if (factorialAux==0)
                        {
                            factorialRes=factorial(num1);

                            printf("a!=[%.2f]\n",factorialRes);

                        }
                        else
                        {

                            printf("ERROR, Imposible factorear es un numero decimal\n");

                        }
                    }
                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (a) o (b)\n");

                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
