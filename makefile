a.out: main.o sum1.o diff.o mult.o power.o
	gcc -o a.out main.o sum1.o diff.o mult.o power.o

main.o: main.c sum1.h diff.h mult.h power.h
	gcc main.c -o main.o -c

sum1.o: sum1.c sum1.h
	gcc sum1.c -o sum1.o -c

diff.o: diff.c diff.h
	gcc diff.c -o diff.o -c

mult.o: mult.c mult.h
	gcc mult.c -o mult.o -c

power.o: power.c power.h
	gcc power.c -o power.o -c

clean:
	rm *.o a.out
