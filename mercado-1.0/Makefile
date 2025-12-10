CC = g++
CFLGAS = -Wreturn-type -Wnull-dereference -Wuninitialized -O -Wunused-function -Wpedantic -Wunused-variable -fsanitize=address -g -O3 -Wall -Wextra -std=c++14
ARQUIVO = main.cpp
PROGRAMA_FINAL = mercado-1.0

tt:
	$(CC) $(CFLGAS) $(ARQUIVO) -o $(PROGRAMA_FINAL)
clean:
	rm -f tt