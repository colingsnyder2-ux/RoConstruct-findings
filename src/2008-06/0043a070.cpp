// from server: 86% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner;

struct Proxy
{
    Owner* owner;
    Proxy(Owner* p) : owner(p) {}
};

struct Owner
{
    Proxy* proxy;
    unsigned int reserved[2];

    Owner() : proxy(new Proxy(this)) {}
    ~Owner() { delete proxy; }
};

struct Storage : Owner
{
    void* first;
    void* last;
    void* end;

    Storage() : first(0), last(0), end(0) {}
};

struct Argument
{
    unsigned int reserved[3];
    int value;
};

struct CSelectionPropGrid
{
    virtual ~CSelectionPropGrid();

    Storage storage;
    unsigned int context;

    CSelectionPropGrid(Argument*, unsigned int);
    void initialize(int);
};

CSelectionPropGrid::CSelectionPropGrid(Argument* argument, unsigned int value)
    : storage(), context(value)
{
    initialize(argument->value);
}
