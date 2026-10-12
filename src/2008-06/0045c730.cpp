// from server: 98% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Base {
    unsigned char data[80];
    Base();
    virtual ~Base();
};

struct __declspec(novtable) InterfaceA {
    InterfaceA() {}
    virtual ~InterfaceA();
};

struct __declspec(novtable) InterfaceB {
    InterfaceB() {}
    virtual ~InterfaceB();
};

struct Array {
    void* data;
    int count;
    int capacity;
    Array() : data(0), count(0), capacity(0) {}
    ~Array();
};

struct Storage {
    void* data;
    bool enabled;
    int count;
    Storage() : data(0), enabled(true), count(0) {}
    ~Storage();
};

struct Render {
    unsigned char data[0xc048];
    Render(const char*);
};

extern const char renderName[];

struct Owner {
    Render* pointer;
    bool flag;
    __forceinline Owner() : pointer(new Render(renderName)), flag(false) {}
    ~Owner();
};

struct SmallArray {
    void* data;
    int count;
    bool flag;
    SmallArray() : data(0), count(0), flag(false) {}
    ~SmallArray();
};

struct Counter {
    int value;
    Counter() {}
    ~Counter();
};

struct Context {
    unsigned char data[0x130];
    int mode;
};

extern Context* __cdecl getContext();
extern int defaultMode;
extern const double initialValue;

struct S : Base, InterfaceA, InterfaceB {
    int mode;
    int reserved;
    Array first;
    Array second;
    Storage storage;
    bool option;
    bool flag1;
    bool flag2;
    bool flag3;
    double value;
    Owner owner;
    SmallArray small;
    Array third;
    Counter counter;

    S(bool);
    virtual ~S();
};

S::S(bool input)
    : option((value = initialValue, input)),
      flag1(false), flag2(false), flag3(true)
{
    counter.value = 0;
    reserved = 0;
    Context* context = getContext();
    if (defaultMode == 0)
        defaultMode = context->mode;
    mode = defaultMode;
    if (mode == 1)
        mode = 3;
}
