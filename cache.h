class cache{
  private:
    std::deque<int> readWrite;
    std::deque<int> hexAddress;
    int sizeL1;
    int sizeL2;
    string type;
  public:
    cache(){this->sizeL1 = 1000; this->sizeL2 = 2000; this->type = "direct";}
    void startSim(int argc, char** argv);
    bool cmdParser(int argc, char** argv);
};
