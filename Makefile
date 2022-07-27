CC=gcc
CFLAGS=`pkg-config --cflags gtk+-3.0`
LFLAGS=`pkg-config --libs gtk+-3.0`
SRC=gato_gui_c.c
EXE=gato.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(EXE) $(LFLAGS)

run:
	./gato.exe

clean:
	rm gato.exe
