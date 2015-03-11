#include "includes.h"
#include "cache.h"

int main(int argc, char **argv){
  cache *cacheSimulator = new cache();
  cacheSimulator->startSim(argc, argv);
  delete cacheSimulator;
  return 0;
}
