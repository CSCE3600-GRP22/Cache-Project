#include "includes.h"
#include "cache.h"

void cache::startSim(int argc, char **argv){
  bool correct;
  correct = this->cmdParser(argc, argv);

  return;
}

bool cache::cmdParser(int argc, char **argv){
  if(argc == 1){
    cerr << "Too Few Arguments" << endl;
    return false;
  }else{
    for(int i = 1; i < argc; i++){
      string cmd(argv[i]);
      if(!cmd.compare("-sizeL1")){

      }else if(!cmd.compare("-sizeL2")){

      }else if(!cmd.compare("-type")){

      }
    }
  }
  return true;
}
