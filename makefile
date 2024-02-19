prog:source.o main.o
	gcc source.o main.o -o prog -lSDL -g -lSDL_image -lSDL_mixer -lSDL_ttf
main.o:main.c
	gcc -c main.c -g
source.o:source.o
	gcc -c source.c -g
