#include"polygone.h"

void initPolygone(polygone_t *poly){
    poly->nbrePoint = 0;
}
void scanPolygone(polygone_t *poly){
    int i;
    point_t p;
    printf("Veuillez saisire la taille du polygone :");
    scanf("%d", &poly->nbrePoint);
    printf("Veuillez saisire les cordonnees de ses points :");
    for (i = 0; i < poly->nbrePoint; i++)
    {
        scanPoint(&p);
        poly->listPoints[i] = p;
    }
}
void printPolygone(polygone_t poly){
    int i;
    for (i = 0; i < poly.nbrePoint; i++)
    {
        printPoint(poly.listPoints[i]);
    }
    
}
void addPoint(polygone_t *poly, point_t p){
    
}
void deletePoint(polygone_t *poly, point_t p){
    
}
int findPoint(polygone_t poly, point_t p){
    
}
double getPerimetre(polygone_t poly){
    
}
double getSurface(polygone_t poly){
    
}