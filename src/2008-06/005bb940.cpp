// from server: 68% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* p;

    Owner() : p(0) {}
    Owner(Owner& other) : p(other.p) {
        other.p = 0;
    }
    ~Owner() {
        if (p)
            operator delete(p);
    }
};

extern "C" void* __stdcall getDescriptor(void*, void*);

struct Base {
    void* vtable;
    unsigned char data[20];

    Base(void*, Owner, Owner);
    ~Base();
};

struct Service;

extern void* stateVtable;
extern void* serviceVtable;

struct State {
    void* vtable;
    Service* service;
    void* first;
    unsigned int unused;
    void* second;
    void* third;

    State(Service*, void* const&, void* const&, void* const&);
};

inline State::State(Service* s, void* const& a,
                    void* const& b, void* const& c)
{
    vtable = &stateVtable;
    service = s;
    first = a;
    second = b;
    third = c;
}

struct Service : Base {
    State* state;

    Service(void*, void*, void*, void*, void*, Owner);
};

Service::Service(void* a, void* b, void* c, void* d, void* e, Owner owner)
    : Base(getDescriptor(a, b), Owner(), Owner(owner))
{
    vtable = &serviceVtable;

    State* replacement = new State(this, c, d, e);
    if (replacement != state && state)
        operator delete(state);
    state = replacement;
}
