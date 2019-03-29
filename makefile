test.out : main.o dynamicArray.o track_lib.o
	g++ main.o dynamicArray.o track_lib.o -o test.out

main.o : main.cpp
	g++ main.cpp -c -o main.o

dynamicArray.o : dynamicArray.cpp dynamicArray.h
	g++ -c dynamicArray.cpp -o dynamicArray.o

track_lib.o : track_lib.cpp
	g++ -c track_lib.cpp -o track_lib.o

run : test.out
	./test.out

clean :
	rm -f main.o
	rm -f dynamicArray.o
	rm -f track_lib.o
	rm -f test.out
