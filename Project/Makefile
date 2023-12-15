prog :  driver_phase_1.o 
	g++ -std=c++11 -o prog driver_phase_1.o 

driver_phase_1.o : A.h B.h Files.h
	g++ -std=c++11 -c driver_phase_1.cpp


# files to remove
clean:
	rm driver_phase_1.o
	rm prog