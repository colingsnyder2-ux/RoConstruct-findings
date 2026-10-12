// from server: 76% by king_originala
void * __cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct TreeStage;

struct Worker {
    unsigned char storage[80];
    Worker(TreeStage *, int);
};

struct Container {
    unsigned char storage[32];
    Container(const int &, const int &);
    ~Container();
};

struct __declspec(novtable) Stage {
    virtual void slot0();

    int field4;
    Worker *field8;
    int field12;

    Stage(TreeStage *, int, int);
    ~Stage();
};

struct TreeStage : Stage {
    int field16;
    unsigned char field20;
    Container first;
    Container second;
    Container third;

    virtual void slot0();
    TreeStage(int, int);
};

__forceinline Stage::Stage(TreeStage *owner, int value, int argument)
{
    Worker *worker = new Worker(owner, argument);
    field4 = value;
    field8 = worker;
    field12 = argument;
}

TreeStage::TreeStage(int value, int argument)
    : Stage(this, value, argument),
      field16(0),
      field20(0),
      first(argument, argument),
      second(argument, argument),
      third(argument, argument)
{
}
