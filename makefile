CC = gcc
FLAG = -Wall -g
LIBS = basicClassification.o advancedClassificationLoop.o

all: maindloop loops loopd

prog: basicClassification.o main.o advancedClassificationLoop.o
	$(CC) -o prog main.o basicClassification.o advancedClassificationLoop.o

maindloop:loopd basicClassification.o main.o advancedClassificationLoop.o
	$(CC) -o maindloop main.o basicClassification.o advancedClassificationLoop.o

loopd:$(LIBS)
	$(CC) -shared -o libclassloops.so $(LIBS)
loops: $(LIBS)
	ar -rcs libclassloops.a $(LIBS)

main.o: main.c NumClass.h
	$(CC) $(FLAG) -c main.c

basicClassification.o: basicClassification.c NumClass.h 
	$(CC) $(FLAG) -c basicClassification.c

advancedClassificationLoop.o:advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAG) -c advancedClassificationLoop.c NumClass.h


.PHONY: clean all

 clean:
	rm -f *.o *.a *.gch *.so maindloop
