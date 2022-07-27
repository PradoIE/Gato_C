#include <stdio.h>
#include <gtk/gtk.h>
#include <time.h>
//Declaración de variables

char matrix[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
int aleatorio;
int i;
int contador = 1;
char player;
GtkWidget *window;
GtkWidget *uno;
GtkWidget *Buno;
GtkWidget *dos;
GtkWidget *Bdos;
GtkWidget *tres;
GtkWidget *Btres;
GtkWidget *cuatro;
GtkWidget *Bcuatro;
GtkWidget *cinco;
GtkWidget *Bcinco;
GtkWidget *seis;
GtkWidget *Bseis;
GtkWidget *siete;
GtkWidget *Bsiete;
GtkWidget *ocho;
GtkWidget *Bocho;
GtkWidget *nueve;
GtkWidget *Bnueve;
GtkWidget *turno;
GtkWidget *jugador;
GtkWidget *ganador;
GtkWidget *gana;


GtkBuilder *builder;


//Funciones Auxiliares


int estado_juego()
{
    if (matrix[1] == matrix[2] && matrix[1] == matrix[3])
        return 1;
    else if (matrix[4] == matrix[5] && matrix[4] == matrix[6])
        return 1;
    else if (matrix[7] == matrix[8] && matrix[7] == matrix[9])
        return 1;
    else if (matrix[1] == matrix[4] && matrix[1] == matrix[7])
        return 1;
    else if (matrix[2] == matrix[5] && matrix[2] == matrix[8])
        return 1;
    else if (matrix[3] == matrix[6] && matrix[3] == matrix[9])
        return 1;
    else if (matrix[1] == matrix[5] && matrix[1] == matrix[9])
        return 1;
    else if (matrix[3] == matrix[5] && matrix[3] == matrix[7])
        return 1;
    else
        return 0;
  }


  void on_Buno_clicked (GtkButton *Buno, gpointer data)
  {
          if (matrix[1] == '1'){
            GtkLabel *uno = (GtkLabel*) data;
            gtk_label_set_text(uno, ("%d",&player));
            matrix[1] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bdos_clicked (GtkButton *Bdos, gpointer data)
  {
          if (matrix[2] == '2'){
            GtkLabel *dos = (GtkLabel*) data;
            gtk_label_set_text(dos, ("%d",&player));
            matrix[2] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Btres_clicked (GtkButton *Btres, gpointer data)
  {
          if (matrix[3] == '3'){
            GtkLabel *tres = (GtkLabel*) data;
            gtk_label_set_text(tres, ("d",&player));
            matrix[3] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bcuatro_clicked (GtkButton *Bcuatro, gpointer data)
  {
           if (matrix[4] == '4'){
            GtkLabel *cuatro = (GtkLabel*) data;
            gtk_label_set_text(cuatro, ("d",&player));
            matrix[4] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bcinco_clicked (GtkButton *Bcinco, gpointer data)
  {
          if (matrix[5] == '5'){
            GtkLabel *cinco = (GtkLabel*) data;
            gtk_label_set_text(cinco, ("d",&player));
            matrix[5] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bseis_clicked (GtkButton *Bseis, gpointer data)
  {
          if (matrix[6] == '6'){
            GtkLabel *seis = (GtkLabel*) data;
            gtk_label_set_text(seis, ("d",&player));
            matrix[6] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bsiete_clicked (GtkButton *Bsiete, gpointer data)
  {
          if (matrix[7] == '7'){
            GtkLabel *siete = (GtkLabel*) data;
            gtk_label_set_text(siete, ("d",&player));
            matrix[7] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bocho_clicked (GtkButton *Bocho, gpointer data)
  {
          if (matrix[8] == '8'){
            GtkLabel *ocho = (GtkLabel*) data;
            gtk_label_set_text(ocho, ("d",&player));
            matrix[8] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  void on_Bnueve_clicked (GtkButton *Bnueve, gpointer data)
  {
          if (matrix[9] == '9'){
            GtkLabel *nueve = (GtkLabel*) data;
            gtk_label_set_text(nueve, ("d",&player));
            matrix[9] = player;
            contador++;
            if (estado_juego()){
              gtk_label_set_text(GTK_LABEL(ganador), ("El ganador es la: "));
              gtk_label_set_text(GTK_LABEL(gana), ("%d",&player));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            } else if(contador == 10){
              gtk_label_set_text(GTK_LABEL(ganador), ("No hay ganador: "));
              gtk_label_set_text(GTK_LABEL(gana), ("EMPATE"));
              gtk_label_set_text(GTK_LABEL(turno), ("Cierre la ventana "));
              gtk_label_set_text(GTK_LABEL(jugador), ("para jugar de nuevo"));
              for(i = 1; i<10; i++){
                matrix[i] = '-';
              }
            }

            if (player == 'X'){
              player = 'O';
            } else {
              player = 'X';
            }
            if(!estado_juego() && contador < 10){
              gtk_label_set_text(GTK_LABEL(jugador), ("%d",&player));
            }
          }
  }

  // MAIN --------------------------------------------------------

  int main(int argc, char *argv[])
  {


      // Se inicializa la ventana de GTK
      gtk_init(&argc, &argv); // Start GTK

    	builder = gtk_builder_new_from_file("gatoproyecto.glade");

    	window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

      //Creación de widgets de botones y labels

      Buno = GTK_WIDGET(gtk_builder_get_object(builder, "Buno"));
      uno = GTK_WIDGET(gtk_builder_get_object(builder, "uno"));

      Bdos = GTK_WIDGET(gtk_builder_get_object(builder, "Bdos"));
      dos = GTK_WIDGET(gtk_builder_get_object(builder, "dos"));

      Btres = GTK_WIDGET(gtk_builder_get_object(builder, "Btres"));
      tres = GTK_WIDGET(gtk_builder_get_object(builder, "tres"));

      Bcuatro = GTK_WIDGET(gtk_builder_get_object(builder, "Bcuatro"));
      cuatro = GTK_WIDGET(gtk_builder_get_object(builder, "cuatro"));

      Bcinco = GTK_WIDGET(gtk_builder_get_object(builder, "Bcinco"));
      cinco = GTK_WIDGET(gtk_builder_get_object(builder, "cinco"));

      Bseis = GTK_WIDGET(gtk_builder_get_object(builder, "Bseis"));
      seis = GTK_WIDGET(gtk_builder_get_object(builder, "seis"));

      Bsiete = GTK_WIDGET(gtk_builder_get_object(builder, "Bsiete"));
      siete = GTK_WIDGET(gtk_builder_get_object(builder, "siete"));

      Bocho = GTK_WIDGET(gtk_builder_get_object(builder, "Bocho"));
      ocho = GTK_WIDGET(gtk_builder_get_object(builder, "ocho"));

      Bnueve = GTK_WIDGET(gtk_builder_get_object(builder, "Bnueve"));
      nueve = GTK_WIDGET(gtk_builder_get_object(builder, "nueve"));

      turno = GTK_WIDGET(gtk_builder_get_object(builder, "turno"));
      jugador = GTK_WIDGET(gtk_builder_get_object(builder, "jugador"));
      ganador = GTK_WIDGET(gtk_builder_get_object(builder, "ganador"));
      gana = GTK_WIDGET(gtk_builder_get_object(builder, "gana"));

      //Conexión de botones con funciones
      g_signal_connect(Buno, "clicked", G_CALLBACK(on_Buno_clicked), uno);
      g_signal_connect(Bdos, "clicked", G_CALLBACK(on_Bdos_clicked), dos);
      g_signal_connect(Btres, "clicked", G_CALLBACK(on_Btres_clicked), tres);
      g_signal_connect(Bcuatro, "clicked", G_CALLBACK(on_Bcuatro_clicked), cuatro);
      g_signal_connect(Bcinco, "clicked", G_CALLBACK(on_Bcinco_clicked), cinco);
      g_signal_connect(Bseis, "clicked", G_CALLBACK(on_Bseis_clicked), seis);
      g_signal_connect(Bsiete, "clicked", G_CALLBACK(on_Bsiete_clicked), siete);
      g_signal_connect(Bocho, "clicked", G_CALLBACK(on_Bocho_clicked), ocho);
      g_signal_connect(Bnueve, "clicked", G_CALLBACK(on_Bnueve_clicked), nueve);

      //Mensajes iniciales

      srand(time(0));
      aleatorio = rand() % 2;
     	if (aleatorio == 1){
    		player = 'X';
    	}
    	else{
    		player = 'O';
    	}
      gtk_label_set_text(GTK_LABEL(jugador), ("d",&player));
      gtk_label_set_text(GTK_LABEL(ganador), ("Juego en curso"));

      //Muestra la ventana y corre el programa
      gtk_widget_show_all(window);
    	gtk_main();



      return EXIT_SUCCESS;
  }
