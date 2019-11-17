CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g -fPIC

all: libmyMath.so libmyMath.a mains maind

mains:	$(OBJECTS_MAIN) libmyMath.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o 

libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c 

main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all mymathd mymaths

mymathd: libmyMath.so

mymaths: libmyMath.a

clean:
	rm -f *.o *.a *.so mains maind