main.out: main.c bubblesort.o selectionsort.o mergesort.o insertionsort.o quicksort.o interface.h
	gcc main.c bubblesort.o selectionsort.o mergesort.o insertionsort.o quicksort.o -o main.out 

bubblesort.o : bubblesort.c
	gcc -c bubblesort.c

insertionsort.o: insertionsort.c
	gcc -c insertionsort.c

mergesort.o: mergesort.c
	gcc -c mergesort.c

selectionsort.o: selectionsort.c
	gcc -c selectionsort.c

quicksort.o: quicksort.c
	gcc -c quicksort.c 

clean: 
	rm -f *.txt *.o
