output: test_static.o matrix_static.o
	gcc test_static.o matrix_static.o -o output

test_static.o: test_static.c
	gcc -c test_static.c

matric_static.o: matrix_static.c matrix_static.h
	gcc -c matrix_static.c

clean:
	rm *.o output
