#include "Complesso.h"
#include <iostream>

int main()
{
    // Costruzione di due numeri complessi
    Complesso a(3.0, 4.0);   // 3 + 4i
    Complesso b(1.0, -2.0);  // 1 - 2i

    std::cout << "a = ";
    a.Stampa();
    std::cout << "\n";

    std::cout << "b = ";
    b.Stampa();
    std::cout << "\n\n";

    // Accesso alle componenti (information hiding: non si tocca re/im direttamente)
    std::cout << "Parte reale di a: " << a.Reale() << "\n";
    std::cout << "Parte immaginaria di a: " << a.Immaginaria() << "\n";
    std::cout << "Modulo di a: " << a.Modulo() << "\n";
    std::cout << "Argomento di a (rad): " << a.Argomento() << "\n\n";

    // Operazioni
    Complesso somma = a.Somma(b);
    Complesso prodotto = a.Prodotto(b);

    std::cout << "a + b = ";
    somma.Stampa();
    std::cout << "\n";

    std::cout << "a * b = ";
    prodotto.Stampa();
    std::cout << "\n";

    // Costruttore di copia
    Complesso c(a);
    std::cout << "\nc (copia di a) = ";
    c.Stampa();
    std::cout << "\n";

    return 0;
}
