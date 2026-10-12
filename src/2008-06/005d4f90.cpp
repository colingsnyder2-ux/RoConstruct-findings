// from server: 64% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    __forceinline Owner(void*);
    __forceinline Owner(Owner&);
    __forceinline ~Owner();
};

__forceinline Owner::Owner(void* value) : p(value) {}

__forceinline Owner::Owner(Owner& other) : p(other.p) {
    other.p = 0;
}

__forceinline Owner::~Owner() {
    if (p)
        operator delete(p);
}

extern "C" void* __stdcall getName(unsigned int, unsigned int);

struct Base {
    void* table;
    unsigned char storage[20];
    void* callback;

    Base(void*, Owner, Owner);
    ~Base();
};

struct Callback {
    void* table;
    void* object;
    unsigned int first;
    unsigned int unused;
    unsigned int second;
    unsigned int third;
};

struct S : Base {
    S(unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int, Owner);
};

S::S(unsigned int a, unsigned int b, unsigned int c,
     unsigned int d, unsigned int e, Owner owner)
    : Base(getName(a, b), Owner(0), owner) {
    table = reinterpret_cast<void*>(0x83c520);

    Callback* replacement =
        static_cast<Callback*>(operator new(sizeof(Callback)));

    if (replacement) {
        replacement->table = reinterpret_cast<void*>(0x83c4a8);
        replacement->object = this;
        replacement->first = c;
        replacement->second = d;
        replacement->third = e;
    }

    if (replacement != callback && callback)
        operator delete(callback);

    callback = replacement;
}
