output: test_dynamic.o matrix_dynamic.o
	gcc test_dynamic.o matrix_dynamic.o -o output

test_dynamic.o: test_dynamic.c
	gcc -c test_dynamic.c

matric_dynamic.o: matrix_dynamic.c matrix_dynamic.h
	gcc -c matrix_dynamic.c

clean:
	rm *.o output
