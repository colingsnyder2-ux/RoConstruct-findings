// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void* derivedTable[];
extern void* callbackTable[];

void* __cdecl getRegistry();

struct Owner {
    void* pointer;

    Owner() : pointer(0) {}
    Owner(Owner& other) : pointer(other.pointer) {
        other.pointer = 0;
    }
    ~Owner() {
        if (pointer)
            operator delete(pointer);
    }
};

struct Base {
    void** table;
    unsigned int reserved[5];
    Owner callback;

    Base(void*, unsigned int, unsigned int, Owner, Owner);
    ~Base();
};

struct Callback {
    void** table;
    void* owner;
    unsigned int first;
    unsigned int reserved;
    unsigned int second;
    unsigned int third;

    Callback(void*, unsigned int, unsigned int, unsigned int);
};

inline Callback::Callback(void* object, unsigned int a,
                          unsigned int b, unsigned int c) {
    table = callbackTable;
    owner = object;
    first = a;
    second = b;
    third = c;
}

struct S : Base {
    S(unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int, Owner);
};

S::S(unsigned int a, unsigned int b, unsigned int c,
     unsigned int d, unsigned int e, Owner tail)
    : Base(getRegistry(), a, b, Owner(), tail) {
    table = derivedTable;
    Callback* replacement = new Callback(this, c, d, e);
    if (replacement != callback.pointer && callback.pointer)
        operator delete(callback.pointer);
    callback.pointer = replacement;
}
