// from server: 62% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);

struct Storage {
    void** proxy;
    unsigned int unused0;
    unsigned int unused1;
    unsigned int first;
    unsigned int last;
    unsigned int limit;

    Storage();
    ~Storage();
};

struct S {
    virtual ~S();

    Storage storage;
    unsigned int value0;
    unsigned int value1;

    S();
};

inline Storage::Storage()
    : proxy(new void*(this)),
      first(0),
      last(0),
      limit(0)
{
}

S::S()
    : value0(0),
      value1(0)
{
}
