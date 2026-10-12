// from server: 79% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    Owner();
    Owner(Owner&);
    ~Owner();
    void* release();
};

inline Owner::Owner() : p(0) {}
inline Owner::Owner(Owner& other) : p(other.release()) {}
inline Owner::~Owner() { if (p) operator delete(p); }
inline void* Owner::release() {
    void* result = p;
    p = 0;
    return result;
}

void* __stdcall getDescriptor(void*, void*);

struct Base {
    virtual void dispatch();
    unsigned char data[20];
    Base(void*, Owner, void*);
    ~Base();
};

struct Product;

struct Binding {
    virtual void dispatch();
    Product* object;
    void* first;
    unsigned int unused;
    void* second;
    void* third;

    Binding(Product*, void*, void*, void*);
};

inline Binding::Binding(Product* o, void* a, void* b, void* c) {
    object = o;
    first = a;
    second = b;
    third = c;
}

struct Product : Base {
    Binding* binding;
    virtual void dispatch();
    Product(void*, void*, void*, void*, void*, Owner);
};

Product::Product(void* a, void* b, void* c, void* d, void* e, Owner owner)
    : Base(getDescriptor(a, b), Owner(), owner.release())
{
    Binding* replacement = new Binding(this, c, d, e);
    if (replacement != binding && binding)
        operator delete(binding);
    binding = replacement;
}
