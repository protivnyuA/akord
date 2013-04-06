
#include <iostream>
#include <conio.h>
#include <math.h>
#include <malloc.h>

using namespace std;

class nota
{
    private:
        int sivol;  // 0 - c 1 octave, 1 - c#
        char nota_name[5]; //A,B,C,D,I,F,G,cis, dis, eis, fis, gis, ais, h, ces,  des, es, fes, ges, aes, hes;
        int octave; // octave number
        int note; // note in the 1 octave (0-12)

        
        
        public:
    int GetSimvol() { return simvol; }
    void SetSimvol(int simv);
}


    void nota::SetSimvol(int simv)
    { simvol=simv;
      octave=simvol/12;
      note=(simvol+48)%12;
      if (note==0) {nota_name[0]="C";nota_name[1]=0;}
      else if (note==1) {nota_name[0]="C";nota_name[1]="#";nota_name[1]=0;}
      //prodolzhayte
    }
