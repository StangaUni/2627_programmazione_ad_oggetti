# Programmazione ad Oggetti — UniPD Informatica 2026/2027

## Disclaimer

Il docente del corso **non carica le proprie diapositive su Moodle** (per ragioni non note).  
Di conseguenza, tutti gli appunti, i riassunti e gli schemi presenti in questa repository derivano **esclusivamente dalla frequentazione delle lezioni frontali**.

È possibile che manchino alcuni contenuti; si spera vivamente di no.  
Eventuali lacune verranno colmate, per quanto possibile, dall’autore (programmatore) e, se necessario, con il supporto di modelli di linguaggio (LLM). In tali casi sarà indicato esplicitamente quando un contenuto deriva da LLM.

---

Riassunti personali redatti a seguito della frequentazione del corso di **Programmazione ad Oggetti** del corso di laurea in Informatica presso l'[Università degli Studi di Padova](https://www.unipd.it), anno accademico 2026/2027.

## Contenuto

| Cartella | Descrizione |
|----------|-------------|
| `Riassunti/` | Riassunti delle lezioni, redatti a partire dai materiali forniti dal docente |
| `Esercizi/` | Esercizi svolti e soluzioni |
| `Utils/` | Materiale di supporto (schede, pattern ricorrenti, guide ai compitini) |
| `assets/` | Immagini e diagrammi SVG (variante chiara e scura) |

## Convenzioni sui file

| Tipo | Posizione | Formato nome | Esempio |
|------|-----------|--------------|---------|
| Riassunto | `Riassunti/` | `NN. Titolo Descrittivo.md` | `03. Algebra Lineare.md` |
| Esercizio | `Esercizi/` | `NN. Titolo.md` oppure `NN.md` | `01. Esercizi sulle liste.md` |
| Utils | `Utils/` | `NN. Descrizione.md` | `01. Primo compitino.md` |
| Diagramma SVG | `assets/` | `nome.svg` / `nome_scuro.svg` | `grafo.svg`, `grafo_scuro.svg` |

- I file Markdown iniziano con un numero a due cifre seguito da punto e spazio (`NN. `).
- Gli SVG sono forniti in due varianti: chiara e scura (`_scuro`).
- Niente spazi nei nomi degli asset: usare `_` o `-`.

## Visualizzazione

I file `.md` sono scritti e gestiti con **[Obsidian](https://obsidian.md)**. La cartella `.obsidian/` è inclusa per allineare l'esperienza a chi usa lo stesso editor.

La visualizzazione su GitHub, VS Code o altri tool può differire (formule LaTeX, link interni, callout).

## Materiale non incluso

Slide, registrazioni e dispense originali **non sono presenti** in questa repository: restano di proprietà dei docenti e dell'Università di Padova.

Cartelle escluse dal tracking (vedi `.gitignore`):

- `Lezioni/` — materiale didattico ufficiale (copyright)
- `Riscritti/`, `Esami/`, `private/` — lavoro personale non pubblicato
- sorgenti Excalidraw in `assets/` — si pubblicano solo gli SVG esportati

Per usare le lezioni in locale:

1. Crea la cartella `Lezioni/` nella root
2. Commenta o rimuovi la riga `Lezioni/` dal `.gitignore`
3. Aggiungi i file e **non fare push** di quella cartella su un repository pubblico

## Licenza

Materiale distribuito sotto **Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)**.

È consentito condividere e adattare per fini non commerciali citando la fonte. Vedi [LICENSE](LICENSE).

Il materiale didattico originale (slide, testi d'esame, ecc.) non è incluso e resta di proprietà dei rispettivi autori.