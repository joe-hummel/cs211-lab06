build:
	rm -f ./a.out
	g++ -std=c++20 -g -Wall -pedantic -Werror main.c tests.c mystrcmp.o -lgtest -lm -lpthread -Wno-unused-variable -Wno-unused-function -Wno-write-strings

run:
	./a.out

valgrind:
	rm -f ./a.out
	g++ -std=c++20 -g -Wall -pedantic -Werror main.c tests.c mystrcmp.o -lgtest -lm -lpthread -Wno-unused-variable -Wno-unused-function -Wno-write-strings
	valgrind --tool=memcheck --leak-check=full ./a.out

clean:
	rm -f ./a.out

submit:
	/gradescope/gs submit 1130317 7087875 tests.c

commit:
	git add .
	git commit -m "$(msg)"

push:
	git push origin main

objfile:
	rm -f mystrcmp.o
	g++ -Wall -c mystrcmp.c -o mystrcmp.o
