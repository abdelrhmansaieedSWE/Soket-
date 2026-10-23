CC=g++

obj=sock.o main.o
test: $(obj)
	$(CC) -o test $(obj)
%.o: %.cpp
	$(CC) -c $<
	