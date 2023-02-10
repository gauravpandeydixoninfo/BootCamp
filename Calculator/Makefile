CC=g++
DEPS=helloworld.h

%.o: %.c $(DEPS) hiiworld.h 
	$(CC) -c $< -o $@

hiiworld: hiiworld.o sum.o sub.o mul.o div.o
	ar -rc libmayamagic.a sum.o mul.o sub.o div.o
	$(CC) -o hiiworld hiiworld.o sum.o mul.o div.o sub.o

helloworld: helloworld.o sum.o sub.o mul.o div.o
	ar -rc libmayamagic.a sum.o mul.o sub.o div.o
	$(CC) -o helloworld helloworld.o sum.o mul.o div.o sub.o
swachh:
	rm -rf *.o helloworld hiiworld
