#ifndef CIRCULO_H
#define CIRCULO_H

using namespace std;

class Circulo : public FiguraGeometrica{

    public:
        Circulo();
        Circulo(string Nom, int R);

        void setRaio(int R);
        int getRaio();

        float getPI();

        float Calcularea();

    protected:

    private:
        int raio;
        const float pi = 3.14;
};

#endif // CIRCULO_H
