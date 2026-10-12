// from server: 70% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Descriptor;
Descriptor* __stdcall getDescriptor(const char*, const char*);

struct Owner {
    void* pointer;
    Owner();
    Owner(Owner&);
    ~Owner();
};

inline Owner::Owner() : pointer(0) {}

inline Owner::Owner(Owner& other) : pointer(other.pointer) {
    other.pointer = 0;
}

inline Owner::~Owner() {
    if (pointer)
        operator delete(pointer);
}

struct Setter {
    int first;
    int second;
};

struct Binding;

struct Base {
    virtual ~Base();
    int reserved[5];
    Binding* binding;

    Base(Descriptor*, Owner, Owner);
};

struct S : Base {
    S(const char*, const char*, int, Setter, Owner);
    virtual ~S();
};

struct Binding {
    virtual ~Binding();
    S* object;
    int getter;
    int unused;
    Setter setter;

    Binding(S*, int, Setter);
};

inline Binding::Binding(S* p, int g, Setter s)
    : object(p), getter(g), setter(s) {}

S::S(const char* name, const char* category, int getter,
     Setter setter, Owner owner)
    : Base(getDescriptor(name, category), Owner(), owner)
{
    Binding* replacement = new Binding(this, getter, setter);
    Binding* previous = binding;
    if (replacement != previous && previous)
        operator delete(previous);
    binding = replacement;
}
