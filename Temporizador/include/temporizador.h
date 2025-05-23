#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

class temporizador
{
private:
    unsigned long intervalo;
    unsigned long inicio;
    bool ativo;

public:
    temporizador(unsigned long tempo_ms = 1000);

    void begin();
    void update();
    void iniciar();
    void parar();
    void reiniciar();
    void definirIntervalo(unsigned long tempo_ms);

    bool estaPronto();
    bool estaAtivo();
};

#endif