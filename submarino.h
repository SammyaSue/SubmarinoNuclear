#ifndef SUBMARINO_H
#define SUBMARINO_H

class Submarino
{
	public:
		Submarino();
		Submarino(const string&, string&, double, double);
		Subamarino(double);
		
		void atualizarsoftware();
		void movisubmarino();
		void subirsubmarino();
		
	private:
		string cor;
		string modelo;
		double velocidadesub;
		double velocidade;
		double altura;
		double largura;
		double comprimento;
		static string versaoSoftware;
	
};

#endif
