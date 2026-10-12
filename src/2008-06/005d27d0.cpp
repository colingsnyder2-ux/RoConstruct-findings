// from server: 64% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct OwnedPointer {
    void* p;
    OwnedPointer() : p(0) {}
    ~OwnedPointer() {
        if (p)
            operator delete(p);
    }
};

struct Base {
    virtual ~Base();
    unsigned char data[20];
    void* getter;

    Base(void*, int, int, OwnedPointer, int);
};

struct S;

struct Getter {
    virtual ~Getter();
    S* object;
    int functionLow;
    int functionHigh;
    int state0;
    int state1;
    int state2;
    int reserved;

    Getter(S* object_, int low, int high)
        : object(object_), functionLow(low), functionHigh(high),
          state0(0), state1(0), state2(0) {}
};

struct S : Base {
    static void* descriptor();
    S(int, int, int, int, int);
    virtual ~S();
};

S::S(int a, int b, int low, int high, int flags)
    : Base(descriptor(), a, b, OwnedPointer(), flags)
{
    Getter* replacement = new Getter(this, low, high);
    void* old = getter;
    if (replacement != old && old)
        operator delete(old);
    getter = replacement;
}
