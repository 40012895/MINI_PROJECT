all: all.out 
all.out : crop_production.o crops.o analysis.o crop_production_test.o analysis_test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
analysis_test.o: analysis_test.cpp crop_production.h crops.h analysis.h
	g++ $< -c
crop_production_test.o: crop_production_test.cpp crop_production.h crops.h
	g++ $< -c
analysis.o : analysis.cpp analysis.h crops.h crop_production.h
	g++ $< -c
crops.o : crops.cpp crops.h crop_production.h
	g++ $< -c    
crop_production.o : crop_production.cpp crop_production.h
	g++ $< -c
clean:
	rm -rf *.o *.out
