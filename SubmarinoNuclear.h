#ifndef SUBMARINO_H
#define SUBMARINO_H


class SubmarinoNuclear
{
public:
      SubmarinoNuclear(const string &, double);
            
      void atualizarsoftware();
      void moversubmarino();
      void localizacaosubmarino();
private:
       string cor; 
       double velocidade;
	     static string versaoSoftware;
};

#endif
