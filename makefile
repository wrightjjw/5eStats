CC 		:= gcc
CFLAGS 	:= -O3
#CFLAGS	:= -pedantic -Wall -g
LDFLAGS := -fopenmp
PREFIX 	:= /usr/local

all: stats

stats: insertSort.o stats.o
	$(CC) bin/insertSort.o bin/stats.o -o bin/stats $(LDFLAGS)

testInsertSort.o: testInsertSort.c
	$(CC) $(CFLAGS) -c src/testInsertSort.c -o bin/testInsertSort.o

insertSort.o: src/insertSort.h src/insertSort.c
	$(CC) $(CFLAGS) -c src/insertSort.c -o bin/insertSort.o

stats.o: src/stats.c
	$(CC) $(CFLAGS) -fopenmp -c src/stats.c -o bin/stats.o

.PHONY: clean
clean:
	rm -f bin/*.exe bin/*.o

.PHONY: install
install: stats
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp bin/stats $(DESTDIR)$(PREFIX)/bin/stats

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/stats

