// from server: 42% by colin
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Base
{
    virtual void virtualFunction();
    char storage[0xc03c];
    Base(const char*);
};

struct Profiler : Base
{
    int count;
    virtual void virtualFunction();
    Profiler(const char*);
};

struct Node
{
    char storage[36];
    Node(void*);
};

struct Member
{
    void* storage;
    Member();
    ~Member();
};

struct SetNode
{
    SetNode* parent;
    SetNode* left;
    SetNode* right;
    char color;
    char pad[3];
    void* key;
};

struct Set
{
    SetNode* head;
    int count;
    int pad;
    void init();
};

struct Vec
{
    void* begin;
    void* end;
    void* cap;

    void init();
};

struct SleepStage
{
    void* vtable;
    int field4;
    void* field8;
    void* fieldC;
    Set set10;
    Set set28;
    Set set40;
    Set set58;
    Set set70;
    Set set88;
    Set setA0;
    Set setB8;
    int fieldD0;
    int fieldD4;
    char fieldD8;
    int fieldDC;
    Vec vecE0;
    Vec vec100;
    Vec vec120;
    Vec vec140;
    Vec vec160;
    Vec vec180;
    int field1A0;
    int field1A4;
    int field1A8;
    int field1AC;
    int field1B0;
    int field1B4;
    Vec vec1B8;
    int field1D8;
    char field1DC;
    Profiler* field1E0;
    Profiler* field1E4;
    Profiler* field1E8;

    SleepStage(int a, int b);
};

void Set::init()
{
    SetNode* n = (SetNode*)operator new(4);
    if (n != 0)
        n->key = this;
    else
        n = 0;
    head = n;
    count = 0;
    pad = 0;
}

void Vec::init()
{
    begin = 0;
    end = 0;
    cap = 0;
}

SleepStage::SleepStage(int a, int b)
{
    field4 = a;
    field8 = 0;
    fieldC = 0;

    vtable = (void*)0x84b088;

    set10.init();
    set28.init();
    set40.init();
    set58.init();
    set70.init();
    set88.init();
    setA0.init();
    setB8.init();

    fieldD0 = 0;
    fieldD4 = 0;
    fieldD8 = 0;
    fieldDC = -1;

    vecE0.init();
    vec100.init();
    vec120.init();
    vec140.init();
    vec160.init();
    vec180.init();

    field1A0 = 0;
    field1A4 = 0;
    field1A8 = 0;
    field1AC = 0;
    field1B0 = 0;
    field1B4 = 0;

    vec1B8.init();

    field1D8 = 0;
    field1DC = 0;

    field1E0 = new Profiler("Collision");
    field1E4 = new Profiler("Wake");
    field1E8 = new Profiler("Sleep");
}
