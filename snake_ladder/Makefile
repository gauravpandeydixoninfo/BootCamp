
%.o: %.c $(DEPS)  
	$(CC) -c $< -o $@

ludo: ludo.o
	ar -rc libmayamagic.a ludo.o
	$(CC) -o ludo ludo.o 
swachh:
	rm -rf *.o ludo
