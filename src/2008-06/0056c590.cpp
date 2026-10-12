// from server: 85% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern const char enumToken[];

struct Base {
    unsigned int name;
    unsigned int data[2];

    Base(unsigned int, unsigned int, const char*);
    virtual ~Base();
};

struct Storage {
    Storage** proxy;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* end;

    Storage();
    ~Storage();
};

inline Storage::Storage()
{
    proxy = new Storage*(this);
    first = 0;
    last = 0;
    end = 0;
}

struct Descriptor;

struct Registry {
    void insert(Descriptor**);
};

struct Lookup {
    Descriptor*& find(unsigned int*);
};

Registry* __cdecl getRegistry();
Lookup* __cdecl getLookup();

struct Descriptor : Base {
    Storage values;
    unsigned int extra;
    unsigned int count;

    Descriptor(unsigned int, unsigned int);
    virtual ~Descriptor();
};

Descriptor::Descriptor(unsigned int a, unsigned int b)
    : Base(a, b, enumToken), values(), extra(0), count(0)
{
    Descriptor* object = this;
    getRegistry()->insert(&object);
    b = name;
    getLookup()->find(&b) = this;
}
