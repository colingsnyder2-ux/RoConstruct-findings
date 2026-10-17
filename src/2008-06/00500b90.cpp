// from server: 81% by colin
typedef unsigned int size_t;

extern "C" long __stdcall InterlockedIncrement(volatile long*);
extern "C" long __stdcall InterlockedDecrement(volatile long*);

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String;
extern void (__thiscall* string_copy)(String*, const String&);
extern void (__thiscall* string_destroy)(String*);

struct String
{
    char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    string_copy(this, source);
}

inline String::~String()
{
    string_destroy(this);
}

struct Parameters
{
    String text;
    int option;
    Parameters(const String&, int);
};

inline Parameters::Parameters(const String& source, int value)
    : text(source), option(value)
{
}

struct Base
{
    volatile long references;
    char storage[128];

    Base();
    virtual ~Base();
    void dispose();
};

struct Head : Base
{
    virtual ~Head();
    bool initialize(int, int, Parameters);
};

struct Reference
{
    Head* pointer;

    Reference();
    explicit Reference(Head*);
    Reference(const Reference&);
    ~Reference();
    void assign(Head*);
};

inline Reference::Reference() : pointer(0)
{
}

inline Reference::Reference(Head* p) : pointer(0)
{
    if (p)
    {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::Reference(const Reference& source) : pointer(0)
{
    assign(source.pointer);
}

inline Reference::~Reference()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0)
    {
        pointer->dispose();
        delete pointer;
    }
}

Reference func_00500b90(int a, int b, String text, int option)
{
    Head* head = new Head;
    Reference owner(head);
    if (head->initialize(a, b, Parameters(text, option)))
    {
        return Reference(owner);
    }
    return Reference();
}
