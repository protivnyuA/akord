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
        nota();//default constructor
        nota(int newsimvol);// конструктор, якщо задано код ноти (0 - с1)
        ~nota();//destructor
    int GetSimvol() { return simvol; }
    void SetSimvol(int simv);
    char* GetNota_name() { return nota_name; }
    void SetNota_name(char* name); 
    int GetOctave() { return octave; }
    void SetOctave(int oct); 
    int GetNote() { return note; }
    void SetNote (int note); 
    void Show();// для вивода на екран
    friend interval operator~(nota &a,nota &b);// визначення інтервала між двома нотами
    void showNota_name();
}


    void nota::SetSimvol(int simv)
    { simvol=simv;
      octave=simvol/12;
      note=(simvol+48)%12;
      if (note==0) {nota_name[0]="C";nota_name[1]=0;}
      else if (note==1) {nota_name[0]="C";nota_name[1]="#";nota_name[1]=0;}
      else if (note==2) {nota_name[0]="D";nota_name[1]=0;nota_name[1]=0;}
      else if (note==3) {nota_name[0]="D";nota_name[1]="#";nota_name[1]=0;}
      else if (note==4) {nota_name[0]="I";nota_name[1]=0;nota_name[1]=0;}
      else if (note==5) {nota_name[0]="F";nota_name[1]=0;nota_name[1]=0;}
      else if (note==6) {nota_name[0]="F";nota_name[1]="#";nota_name[1]=0;}
      else if (note==7) {nota_name[0]="G";nota_name[1]=0;nota_name[1]=0;}
      else if (note==8) {nota_name[0]="G";nota_name[1]="#";nota_name[1]=0;}
      else if (note==9) {nota_name[0]="A";nota_name[1]=0;nota_name[1]=0;}
      else if (note==10) {nota_name[0]="A";nota_name[1]="#";nota_name[1]=0;}
      else if (note==11) {nota_name[0]="B";nota_name[1]=0;nota_name[1]=0;}
      else //(note=12)
      {nota_name[0]="C";nota_name[1]=0;}
      
      
      
      
    }

main()
{
nota a(0),b(2),c(4);
a.show();
b.show();
c.show();
}
class intervaly
{
    private:
        nota nota_first;  
        nota nota_second;
        nota interval;
                public:
    interval();//default constructor
    interval(int newsimvol)// конструктор
    ~interval();//destructor
    int GetNota_firs() { return nota_first; }
    void SetNota_first (int n_first);
    char GetNota_second() { return nota_second; }
    void SetNota_second(int n_second); 
    int GetIntervaly() { return interval; }
    void SetInterval(int interv);
void SetInterval (int interval); 
void Show();// для вивода на екран
    
    

