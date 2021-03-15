output: test_dynamic.o matrix_dynamic.o matrix_static.o
	gcc test_dynamic.o matrix_static.o matrix_dynamic.o -o output

test_dynamic.o: test_dynamic.c
	gcc -c test_dynamic.c

matric_static.o: matrix_static.c matrix_static.h
	gcc -c matrix_static.c

matric_dynamic.o: matrix_dynamic.c matrix_dynamic.h
	gcc -c matrix_dynamic.c
clean:
	rm *.o output
