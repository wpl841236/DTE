main.exe:main.o calc.o
	g++ main.o calc.o -o main.exe -static-libstdc++ -static-libgcc &&make clean
main.o:main.cpp
	g++ main.cpp -c -o main.o
calc.o:calc.cpp
	g++ calc.cpp -c -o calc.o
clean:
	del /f *.o