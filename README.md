akord
=====

Створюэмо клас нота, клас інтервал та клас акорд.

#include <iostream>
#include <conio.h>
#include <math.h>
#include <malloc.h>

using namespace std;

class nota
{
    private:
        int sivol;
        int A,B,C,D,I,F,G,cis, dis, eis, fis, gis, ais, h, ces,  des, es, fes, ges, aes, hes;

        
        
        public:
    int GetSimvol() { return simvol; }
    void SetSimvol(int simv) { simvol=simv; }
