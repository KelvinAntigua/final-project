prog: driver_phase_1.o Customer.o Food.o
	g++ -std=c++11 -o prog driver_phase_1.o Customer.o Food.o

driver_phase_1.o:  Customer.h Food.h
	g++ -std=c++11 -c driver_phase_1.cpp

Customer.o: Customer.h Food.h
	g++ -std=c++11 -c Customer.cpp

Food.o:  Food.h Customer.h
	g++ -std=c++11 -c Food.cpp

clean:
	rm driver_phase_1.o Customer.o Food.o prog
