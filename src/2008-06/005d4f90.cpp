// from server: 80% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

void* __cdecl getRegistry();

struct Owner {
    void* pointer;

    Owner();
    Owner(Owner&);
    ~Owner();
    void* release();
};

inline Owner::Owner() : pointer(0) {}

inline Owner::Owner(Owner& other) : pointer(other.pointer) {
    other.pointer = 0;
}

inline Owner::~Owner() {
    if (pointer)
        operator delete(pointer);
}

inline void* Owner::release() {
    void* result = pointer;
    pointer = 0;
    return result;
}

struct Base {
    unsigned int reserved[5];
    Owner callback;

    Base(void*, unsigned int, unsigned int, Owner, void*);
    virtual ~Base();
};

struct Callback {
    void* owner;
    unsigned int first;
    unsigned int reserved;
    unsigned int second;
    unsigned int third;

    Callback(void*, unsigned int, unsigned int, unsigned int);
    virtual ~Callback();
};

inline Callback::Callback(void* object, unsigned int a,
                          unsigned int b, unsigned int c)
    : owner(object), first(a), second(b), third(c) {}

struct S : Base {
    S(unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int, Owner);
    virtual ~S();
};

S::S(unsigned int a, unsigned int b, unsigned int c,
     unsigned int d, unsigned int e, Owner tail)
    : Base(getRegistry(), a, b, Owner(), tail.release()) {
    Callback* replacement = new Callback(this, c, d, e);
    if (replacement != callback.pointer && callback.pointer)
        operator delete(callback.pointer);
    callback.pointer = replacement;
}
