winx := bin/DND.exe
linx:= bin/DND

headers:= insertSort.h testInsertSort.h
src:= stats.c

comp := gcc $(src) $(headers)

win:
	$(comp) -o $(winx)

lin:
	$(comp) -o $(linx)