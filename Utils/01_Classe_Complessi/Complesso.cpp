#include "Complesso.h"
#include <cmath>
#include <iostream>

// ---------- Costruttori ----------

Complesso::Complesso()
    : re(0.0), im(0.0)
{
}

Complesso::Complesso(double reale, double immaginaria)
    : re(reale), im(immaginaria)
{
}

Complesso::Complesso(const Complesso& altro)
    : re(altro.re), im(altro.im)
{
}

// ---------- Accessori ----------

double Complesso::Reale() const
{
    return re;
}

double Complesso::Immaginaria() const
{
    return im;
}

double Complesso::Modulo() const
{
    return std::sqrt(re * re + im * im);
}

double Complesso::Argomento() const
{
    return std::atan2(im, re);
}

// ---------- Operazioni ----------

Complesso Complesso::Somma(const Complesso& altro) const
{
    return Complesso(re + altro.re, im + altro.im);
}

Complesso Complesso::Prodotto(const Complesso& altro) const
{
    // (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    double nuovo_re = re * altro.re - im * altro.im;
    double nuovo_im = re * altro.im + im * altro.re;
    return Complesso(nuovo_re, nuovo_im);
}

// ---------- Utilità ----------

void Complesso::Stampa() const
{
    std::cout << re;
    if (im >= 0.0)
        std::cout << " + " << im << "i";
    else
        std::cout << " - " << -im << "i";
}
