winx := bin/stats

test:= testInsertSort.h
src:= stats.c insertSort.h

test:
	gcc $(src) $(test) -o $(winx).exe

debug:
	gcc -g $(src) $(test) -o $(winx)_debug.exe

all:
	gcc $(src) $(test) -o $(winx).exe
	gcc -g $(src) $(test) -o $(winx)_debug.exe