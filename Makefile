GXX = g++ 

main: main.o shapes.o 
		g++ -o main main.o shapes.o 

main.o: main.cpp shapes.cpp 

shapes.o: shapes.cpp shapes.h 

clean: 
		rm -f shapes.o main.o 