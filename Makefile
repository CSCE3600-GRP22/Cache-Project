CacheSim	: cache.o cacheClass.o
			  g++ cacheClass.o cache.o -g -o CacheSim
cache.o		: cache.cpp cache.h includes.h
			  g++ -c -g cache.cpp
cacheClass.o	: cacheClass.cpp cache.h includes.h
				g++ -c -g cacheClass.cpp
clean:
				rm *.o
run:
				./CacheSim –sizeL1 500 –sizeL2 1000 –type direct < big_trace.trace
