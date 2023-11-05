![Roll_the_Dice_banner](https://nathzenh.ch/prgc/Roll_The_Dice.png "🎲 Roll The Dice")

# Roll The Dice, PRGC-Projekt

## Discription
Es wird durch betätigen eines Knopfes auf dem Seven-segment display eine Zahl von 1-6 gewürfelt

## Visualisierung
![Roll_the_Dice_GIF](https://github.com/NathZenh/roll-the-dice/assets/46894591/07bb8a0e-74ce-453c-b156-b380280f5086)


https://github.com/NathZenh/roll-the-dice/assets/46894591/62857a1d-f3aa-4d4c-8a3c-752251f1ff68



## Installation
- Lade die Dateien herunter und füge Sie im "Source" Ordner deines PRGC-Board Projektes hinen. Achte darauf das die Startdatei erstes_programm.c ist.
- Anschliessend führe das Programm auf deinem PRGC-Board mit JLink aus.

- Verbinde deinen TinyK22 mit der Printbuchse wie im unteren Bild mit Rot angegeben ist, dabei Spielt es beim Output keine Rolle ob Sie sich für LD8 oder LD' entscheiden.

![prgc-board-pinout](https://github.com/NathZenh/roll-the-dice/assets/46894591/95fb5b1b-8001-4d05-b093-ee410b960084)

## Documentation
Im Projekt enthalten sind 7 Dateien, die Programme:
- erstes_programm.c
- seven_Seg.c
- seven_Seg.h
- dice.c
- dice.h
- show_seven_Seg.c
- show_seven_Seg.h

Wobei die .h Dateien blos eine Header-Datei ist welche benötigt wird um deren Programme fehlerf frei ins Dokument einzubinden.

### erstes_programm.c
Dies ist das Hauptprogramm des Projektes, es beinhalten die main Funktion und führt dadurch das gesammte Programm aus.
1. Werden alle benötigten Imports eingefügt
2. Öffnet sich die main() Funktion
3. Wird die init() Funktion zur Initialisierung aufgerufen
4. Werden die benötigten Variabeln gesetzt.
5. Wird das 7-Segment Display Initialisiert.
6. Es wird eine Endlos-Schleife gestartet worin abgefragt wird, ob siche ein Input verändert hat.

Wenn der Knopf gedürckt wird, soll gewürfelt werden. Das heisst es wird die Funktion dice() aus der Datei dice.c aufgrufen. Ausserdem wird der Punkt beim 7-Segment Display deaktiviert und erst nach der Ausführung der Funktion wieder angeschaltet. Dadurch erkennt man das die Animation noch läuft.

![dice_when_pressed](https://github.com/NathZenh/roll-the-dice/assets/46894591/7f531535-5481-4dab-9006-ae955371dc64)

### dice.c
In diesem Programm wird "gewürfelt", das heisst:
- zudem wird hier die Animation bestimmt, also wird das Wechseln der Zahl immer langsamer -> wie ein Würfel der an kinetischer Energie verliert. In diesem Fall wie folgt: $$\sum_{x=0}^6 ms\\_to\\_wait = 2^{x+4}$$
- es wird 7 mal eine neue Zahl generiert. (Siehe Fussgesteuere while Schleife, wenn die selbe Zahl wie zuvor generiert wurde, wird dies einfach nochmal ausgeführt)
- Anschliessend wird jeweils die generierte Zahl an die Funktion seven_seg() in der Datei seven_Seg.c gesendet.

![dice](https://github.com/NathZenh/roll-the-dice/assets/46894591/cba84e72-c9f1-4513-a23e-0fb098781d27)

### seven_Seg.c
In diesem Programm wird jeweils nur der Aufruf der verschiedenen Funktionen aus der Datei show_seven_Seg.c verwaltet. Es wird also immer die Seven-Segment Anzeige ausgeschaltet und anschliessend die überlieferte Zahl per Funktion ausgedrückt.

![sev_Seg](https://github.com/NathZenh/roll-the-dice/assets/46894591/1352df4f-28ee-4210-942e-a288cbba176a)

### show_seven_Seg.c
Dies ist die letzte Datei und beinhaltet nur Funktionen welche die Anzeige auf dem Seven-Segment Display ändern. Es beinhaltet eine Funktion welche alle Segmente ausschaltet und jeweils zu allen Zahlen von 1-6 eine Funktion zur aktivierung der Segmente umd die richtige Zahl darzustellen.

![Dice_darstellung](https://github.com/NathZenh/roll-the-dice/assets/46894591/88bb49f4-a025-420b-8c2e-1acceaa22670)

## Lizenz
Dieses Programme sind für alle frei zu Nutzen.
