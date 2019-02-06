winx := bin/stats

test:= testInsertSort.h
src:= stats.c insertSort.h
libs := -fopenmp

test:
	gcc $(src) $(test) $(libs) -o $(winx).exe

debug:
	gcc -g $(src) $(test) $(libs) -o $(winx)_debug.exe

all:
	gcc $(src) $(test) $(libs) -o $(winx).exe
	gcc -g $(src) $(test) $(libs) -o $(winx)_debug.exe

windows:
	gcc $(src) $(libs) -o $(winx).exe

clean:
	rm bin/*.exe