CC=g++
DEPS=multi_matrix.h

%.o: %.c $(DEPS) addition_matrix.h 
	$(CC) -c $< -o $@

multi_matrix: multi_matrix.o
	ar -rc libmayamagic.a multi_matrix.o
	$(CC) -o multi_matrix multi_matrix.o

all: multi_matrix addition_matrix

addition_matrix: addition_matrix.o 
	ar -rc libmayamagic.a addition_matrix.o
	$(CC) -o addition_matrix addition_matrix.o
swachh:
	rm -rf *.o multi_matrix addition_matrix
