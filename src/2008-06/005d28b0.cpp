// from server: 54% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* p;

    Owner() : p(0) {}
    Owner(Owner& other) : p(other.release()) {}
    ~Owner() {
        if (p)
            operator delete(p);
    }

    void* release() {
        void* result = p;
        p = 0;
        return result;
    }
};

extern void* __cdecl descriptor();

struct Base {
    virtual ~Base();
    unsigned int storage[5];

    Base(void*, int, int, Owner, void*);
};

struct S;

struct Callback {
    virtual void invoke();
    S* object;
    int first;
    int second;
    void* state1;
    void* state2;
    void* state3;
    unsigned int unused;

    Callback(S* s, int a, int b)
        : object(s), first(a), second(b),
          state1(0), state2(0), state3(0) {}
};

struct S : Base {
    Callback* callback;

    S(int, int, int, int, Owner);
    virtual ~S();
};

S::S(int a, int b, int c, int d, Owner owner)
    : Base(descriptor(), a, b, Owner(), owner.release())
{
    Callback* replacement = new Callback(this, c, d);
    Callback* previous = callback;
    if (replacement != previous && previous)
        delete previous;
    callback = replacement;
}
