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
     int a;
     for (a=1; a<10; a++){
          if (a%2==0){
               printf("Es turno del jugador X");
          } 
          else{
               printf("Es turno del jugador O");
          }
     }
};


void colocar_pieza(char m[3][3])
{
    int aux;
    int i,j,r;

    do{
       
        do{
        printf("Elige una casilla basandote en los numeros del tablero:\n");
        fflush(stdin);
        scanf("%i",&aux);
        } while (aux<1||aux>9);

        r=0;

       
        switch(aux){
                  
            case 1:{
                i=0;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.\n\n");
                }
                break;
            }
                  
            case 2:{
                i=0;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 3:{
                i=0;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 4:{
                i=1;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 5:{
                i=1;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 6:{
                i=1;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 7:{
                i=2;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 8:{
                i=2;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 9:{
                i=2;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    r=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
        }
    }while (r==1);
    m[i][j] = 'X';   
        
};


void victoria(char m[3][3])
{

};

void pantalla_final(char m[3][3])
{

};
