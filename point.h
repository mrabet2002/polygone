#include<stdio.h>
#include<math.h>

typedef struct point_t
{
    int x;
    int y;
} point_t;

void initPoint(point_t *);
void scanPoint(point_t *);
void printPoint(point_t);
void deplacerPoint(point_t *p, int, int);
double distanceOrigine(point_t);
double distancePoint(point_t, point_t);

void initPoint(point_t *p){
    p->x = 0;
    p->y = 0;
}
void scanPoint(point_t *p){
    scanf("%d %d", &p->x, &p->y);
}
void printPoint(point_t p){
    printf("(%d,%d)\n", p.x, p.y);
}
void deplacerPoint(point_t *p, int decal_x, int decal_y){
    p->x += decal_x;
    p->y += decal_y;
}
double distanceOrigine(point_t p){
    return sqrt( p.x*p.x + p.y*p.y );
}
double distancePoint(point_t a, point_t b){
    return sqrt( (a.x*a.x - b.x*b.x) + (a.y*a.y - b.y*b.y) );
}