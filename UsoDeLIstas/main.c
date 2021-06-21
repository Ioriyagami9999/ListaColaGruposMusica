#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define valor 10

struct almacenamiento{
char precio[50];
char anio[50];
char genero[30];
char artista[50];
char nombre[50];
char numeroCanciones[50];
}alma[valor];

typedef struct {
char* dato;
struct nodo* siguiente;

}nodo ;

nodo* primer=NULL;
nodo* ultimo=NULL;

void agregar (nodo* noDo){
noDo->siguiente=NULL;
if (primer==NULL){
    primer=noDo;
    ultimo=noDo;

}else{

ultimo->siguiente=noDo;
ultimo=noDo;

}

}



void capturaDatos(){
    int o,j,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0,k9=0,k10=0,l;
    char *tabla[]={"NOMBRE","ARTISTA","ANIO","NUM_CAN","GENERO", "PRECIO"};
    char *generoMusicales0, *generoMusicales1, *generoMusicales2, *generoMusicales3, *generoMusicales4, *generoMusicales5, *generoMusicales6,*generoMusicales7,*generoMusicales8,*generoMusicales9;
char *ordenes, *s, *ordenes2;
    for (j=0;j<valor;j++){
        printf("ingresa los datos  de %s%s ",tabla[0],"  :  ");
        scanf("%s",alma[j].nombre);
        printf("ingresa los datos  de %s%s ",tabla[1],"  :  ");
        scanf("%s",alma[j].artista);
        printf("ingresa los datos  de %s%s ",tabla[2],"  :  ");
        scanf("%s",alma[j].anio);
        printf("ingresa los datos  de %s%s ",tabla[3],"  :  ");
        scanf("%s",alma[j].numeroCanciones);
        printf("ingresa los datos  de %s%s ",tabla[4],"  :  ");
        scanf("%s",alma[j].genero);
        printf("ingresa los datos  de %s%s ",tabla[5],"  :  ");
        scanf("%s",alma[j].precio);



system("cls");






    }




for (l=0;l<6;l++){
    printf("%s\t",tabla[l]);

}
printf("\n");
for(j=0;j<valor;j++){
  nodo* primerNodo=malloc(sizeof(nodo));
primerNodo->dato=alma[j].nombre;
agregar(primerNodo);

nodo* segundoNodo=malloc(sizeof(nodo));
segundoNodo->dato=alma[j].artista;
agregar(segundoNodo);

nodo* tercerNodo=malloc(sizeof(nodo));
tercerNodo->dato=alma[j].anio;
agregar(tercerNodo);

nodo* cuartoNodo=malloc(sizeof(nodo));
cuartoNodo->dato=alma[j].numeroCanciones;
agregar(cuartoNodo);

nodo* quintoNodo=malloc(sizeof(nodo));
quintoNodo->dato=alma[j].genero;
agregar(quintoNodo);


nodo* sextoNodo=malloc(sizeof(nodo));
sextoNodo->dato=alma[j].precio;
agregar(sextoNodo);


nodo* i=primerNodo;

while(i!=NULL){
    printf("%s\t",i->dato);

    i=i->siguiente;

}
printf("\n");


}





}

int main()
{
    capturaDatos();
 getch ();
    return 0;
}
