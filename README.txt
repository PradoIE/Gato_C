# Gato_C
Elaborado por:
Shannon Torres
Alonso Prado
Andrés Vega


Introducción y funcionamiento:
El presente programa cumple la función de un juego tres en raya (gato o tic tac toe)
El juego cuenta con una única ventana, en la cual se desarrolla todo el juego, esta cuenta con tres secciones:
1. Muestra el jugador.
2. El tablero.
3. El ganador.

Modo de juego:

El programa inicia eligiendo al azar el jugador o la ficha del jugador, ya sea "X" o "O", seguidamente el jugador elige la posición en la que desea jugar, presionando con el mouse el botón que se encuentra en la posición elegida; a continuación, el otro jugador elige dónde desea jugar y así se desenvuelve el juego sucesivamente. Los jugadores no pueden saltarse turnos

Posibles situaciones para finalizar el juego:

1. La partida termina cuando el jugador logra colocar tres fichas continuas, ya sea vertical, horizontal o diagonal, este es asignado como jugador
2. El juego queda empate cuando todos los espacios están llenos y ningún jugador logró completar tres posiciones en raya.

Instrucciones para ejecutar:

Los tres archivos, "Makefile”, "gatoproyecto.glade" y "gato_gui_c.c" deben de estar en una misma carpeta, se corre "Make" y después "make run".
