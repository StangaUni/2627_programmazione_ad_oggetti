# Esempio: classe `Complesso`

Piccolo programma che mostra i concetti introdotti nelle prime lezioni:

- definizione di una classe con interfaccia pubblica e rappresentazione privata (**information hiding** / ADT);
- costruttore di default, costruttore parametrico e costruttore di copia;
- metodi `const`;
- separazione tra file header (`.h`) e file di implementazione (`.cpp`).

Il numero complesso può essere visto in forma **algebrica** (`re + im·i`) o in forma **polare** (modulo + argomento).  
La classe memorizza internamente la forma algebrica e calcola modulo e argomento solo quando richiesti.

## File

| File            | Ruolo                                      |
|-----------------|--------------------------------------------|
| `Complesso.h`   | Dichiarazione della classe (interfaccia)   |
| `Complesso.cpp` | Definizione dei metodi                     |
| `main.cpp`      | Programma di prova                         |

## Compilazione

```bash
g++ -std=c++17 -Wall -Wextra -o complesso Complesso.cpp main.cpp
./complesso
```
