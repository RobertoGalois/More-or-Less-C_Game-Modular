moreOrLessGame: check.o game.o level.o main.o show.o system.o
	gcc -o moreOrLessGame check.o game.o level.o main.o show.o system.o
check.o: check.c check.h system.h
	gcc -c check.c
game.o: game.c game.h level.h system.h show.h check.h
	gcc -c game.c
level.o: level.c level.h show.h check.h
	gcc -c level.c
show.o: show.c show.h
	gcc -c show.c
system.o: system.c system.h
	gcc -c system.c system.h
main.o: main.c game.h
	gcc -c main.c
clean:
	rm -f *.o moreOrLessGame
