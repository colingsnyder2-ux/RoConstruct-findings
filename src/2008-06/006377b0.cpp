// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owned {
    void* p;

    Owned();
    Owned(Owned&);
    ~Owned();
};

inline Owned::Owned() : p(0) {}

inline Owned::Owned(Owned& other) : p(other.p) {
    other.p = 0;
}

inline Owned::~Owned() {
    if (p)
        operator delete(p);
}

extern void* __cdecl descriptor();

struct Callback {
    virtual void invoke();

    void* owner;
    void* context;
    unsigned int unused;
    void* first;
    void* second;

    Callback(void*, void*, void*, void*);
};

inline Callback::Callback(void* o, void* c, void* f, void* s)
    : owner(o), context(c), first(f), second(s) {}

struct Base {
    virtual void method();

    unsigned char storage[20];
    Callback* callback;

    Base(void*, void*, void*, Owned, Owned);
    ~Base();
};

struct S : Base {
    virtual void method();

    S(void*, void*, void*, void*, void*, Owned);
};

S::S(void* a, void* b, void* context, void* first, void* second,
     Owned owned)
    : Base(descriptor(), a, b, Owned(), owned)
{
    Callback* replacement = new Callback(this, context, first, second);

    Callback* previous = callback;
    if (replacement != previous && previous)
        operator delete(previous);

    callback = replacement;
}
