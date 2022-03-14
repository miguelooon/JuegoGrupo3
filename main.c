#include<stdio.h>

void loop(char m[3][3]);
void mostrar_tablero(char m[3][3]);
void colocar_pieza(char m[3][3]);
void turno(char m[3][3]);
void victoria(char m[3][3]);
void pantalla_final(char m[3][3]);


int main()
{
     char m[3][3];
     void loop(m);
     return 0;
};


void loop(char m[3][3])
{
     void mostrar_tablero(m);
     void turno(m);
     void colocar_pieza(m);
     void victoria(m);
     void pantalla_final(m);
};


void mostrar_tablero(char m[3][3])
{

};


void turno(char m[3][3])
{

};


void colocar_pieza(char m[3][3]){
     
    int aux; //Definimos una variable auxiliar de caracteres
    int i,j,k; //Definimos tres variables numericas

    do{
        
        //Pedimos al usuario que ingrese un numero, lo guardamos si es que esta entre el 1 y el 9 contandolos
        
        do{
        printf("Elige una casilla basandote en los numeros del tablero:\n");
        fflush(stdin);//Refrescamos
        scanf("%i",&aux);
        } while (aux<1||aux>9);
         
        //Definimos una especie de contador para terminar ciclos

        k=0;

        //Ahora, marcaremos X o O con un ciclo switch dependiendo de lo que ingresa el usuario. 
        //Tendremos en total 9 casos, y si nuestra casilla ya esta ocupada, pediremos otra casilla.
         
        switch(aux){
                  
            case 1:{
                i=0;
                j=0;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.\n\n");
                }
                break;
            }
                  
            case 2:{
                i=0;
                j=1;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 3:{
                i=0;
                j=2;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 4:{
                i=1;
                j=0;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 5:{
                i=1;
                j=1;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 6:{
                i=1;
                j=2;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 7:{
                i=2;
                j=0;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 8:{
                i=2;
                j=1;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 9:{
                i=2;
                j=2;
                if (c[i][j]=='X'|| c[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
        }
    }while (k==1);
     
    c[i][j] = 'X';
    }



void victoria(char m[3][3])
{

};

void pantalla_final(char m[3][3])
{

};
