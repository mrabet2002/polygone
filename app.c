#include<stdio.h>
#include"polygone.h"

int main(int argc, char const *argv[])
{
    polygone_t poly;
    initPolygone(&poly);
    scanPolygone(&poly);
    printPolygone(poly);
    return 0;
}
