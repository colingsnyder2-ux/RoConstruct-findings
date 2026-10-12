// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Handle {
    void* p;
    Handle() : p(0) {}
    Handle(Handle& other) : p(other.p) { other.p = 0; }
    ~Handle() { if (p) operator delete(p); }
};

void* __cdecl getType();

struct Base {
    virtual void dispatch();
    unsigned char storage[20];
    void* implementation;

    Base(void*, void*, void*, Handle, Handle);
    ~Base();
};

struct Descriptor;

struct Implementation {
    virtual void get();
    virtual void set();

    Descriptor* owner;
    unsigned int getter;
    unsigned int unused;
    unsigned int setterFirst;
    unsigned int setterSecond;

    Implementation(Descriptor* d, unsigned int g,
                   unsigned int s1, unsigned int s2)
        : owner(d), getter(g), setterFirst(s1), setterSecond(s2) {}
};

struct Descriptor : Base {
    virtual void dispatch();
    Descriptor(void*, void*, unsigned int, unsigned int,
               unsigned int, Handle);
};

Descriptor::Descriptor(void* name, void* category, unsigned int getter,
                       unsigned int setterFirst, unsigned int setterSecond,
                       Handle attributes)
    : Base(getType(), name, category, Handle(), attributes)
{
    Implementation* p =
        new Implementation(this, getter, setterFirst, setterSecond);
    if (p != implementation && implementation)
        operator delete(implementation);
    implementation = p;
}
