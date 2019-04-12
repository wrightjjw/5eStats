stats.exe: insertSort.o stats.o
	gcc bin/insertSort.o bin/stats.o -o bin/stats.exe -fopenmp

testInsertSort.o: testInsertSort.c
	gcc -c src/testInsertSort.c -o bin/testInsertSort.o

insertSort.o: src/insertSort.h src/insertSort.c
	gcc -c src/insertSort.c -o bin/insertSort.o

stats.o: src/stats.c
	gcc -fopenmp -c src/stats.c -o bin/stats.o

clean:
	rm -f bin/*.exe bin/*.o