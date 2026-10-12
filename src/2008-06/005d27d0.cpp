// from server: 60% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern unsigned int serviceTable[];
extern unsigned int implementationTable[];

void* __cdecl classDescriptor();

struct Owner {
    void* value;

    Owner();
    Owner(void*&);
    ~Owner();
};

inline Owner::Owner() : value(0)
{
}

inline Owner::Owner(void*& p) : value(p)
{
    p = 0;
}

inline Owner::~Owner()
{
    if (value)
        operator delete(value);
}

struct Member {
    unsigned int first;
    unsigned int second;
};

struct Base {
    unsigned int* table;
    unsigned int storage[5];
    void* implementation;

    Base(void*, const char*, unsigned int, Owner, Owner);
    ~Base();
};

struct S;

struct Implementation {
    unsigned int* table;
    S* object;
    Member member;
    unsigned int first;
    unsigned int second;
    unsigned int third;
    unsigned int unused;

    Implementation(S*, Member);
};

inline Implementation::Implementation(S* p, Member m)
    : table(implementationTable), object(p), member(m),
      first(0), second(0), third(0)
{
}

struct S : Base {
    S(const char*, unsigned int, Member, void*);
};

S::S(const char* name, unsigned int flags, Member member, void* owner)
    : Base(classDescriptor(), name, flags, Owner(), Owner(owner))
{
    table = serviceTable;
    Implementation* p = new Implementation(this, member);
    if (p != implementation && implementation)
        operator delete(implementation);
    implementation = p;
}
