all: encode decode


encode: encode.o
	gccx -o encode encode.o -lm

encode.o: encode.c
	gccx -c encode.c

decode: decode.o
	gccx -o decode decode.o -lm

decode.o: decode.c
	gccx -c decode.c
