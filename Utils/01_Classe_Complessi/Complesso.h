#ifndef COMPLESSO_H
#define COMPLESSO_H

#include <iostream>

// ADT per un numero complesso.
// La rappresentazione interna (forma algebrica) è nascosta:
// dall'esterno si interaggisce solo tramite l'interfaccia pubblica.
class Complesso {
public:
    // Costruttore di default: 0 + 0i
    Complesso();

    // Costruttore da parte reale e immaginaria
    Complesso(double reale, double immaginaria);

    // Costruttore di copia
    Complesso(const Complesso& altro);

    // Accessori (sola lettura)
    double Reale() const;
    double Immaginaria() const;

    // Modulo e argomento (forma polare)
    double Modulo() const;
    double Argomento() const;   // in radianti

    // Operazioni
    Complesso Somma(const Complesso& altro) const;
    Complesso Prodotto(const Complesso& altro) const;

    // Stampa in forma algebrica: a + bi
    void Stampa() const;

private:
    double re;   // parte reale
    double im;   // parte immaginaria
};

#endif
