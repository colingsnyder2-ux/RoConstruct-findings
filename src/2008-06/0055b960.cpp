// from server: 79% by king_originala
typedef unsigned long DWORD;

extern "C" long __stdcall InterlockedIncrement(volatile long *);
void *__cdecl operator new(unsigned int);

struct Log {
    DWORD data[2];
    Log();
    ~Log();
};

struct Interface {
    DWORD table;
    __forceinline Interface();
    ~Interface();
};

struct Signal {
    DWORD table;
    DWORD data[2];
    DWORD secondary;
    Signal();
    ~Signal();
};

struct Slot {
    DWORD table;
    DWORD data[7];
    Slot();
    ~Slot();
};

struct Counts {
    DWORD first;
    DWORD second;
    __forceinline Counts();
    ~Counts();
};

struct __declspec(novtable) Head {
    virtual void dispatch();
    unsigned char flag;
    Log log;
    Interface interfacePart;
    Signal signal;
    Slot slots0;
    Slot slots1;
    Slot slots2;
    Slot slots3;
    Slot slots4;
    Slot slots5;

    __forceinline Head();
    ~Head();
};

struct String {
    DWORD data[7];
    __forceinline String(const char *);
    ~String();
};

typedef String *(__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;

struct Container {
    struct Link {
        Container *owner;
    };

    Link *link;
    DWORD untouched[2];
    DWORD first;
    DWORD second;
    DWORD third;

    __forceinline Container();
    ~Container();
};

struct Empty {
    __forceinline Empty();
    ~Empty();
};

struct Triple : Empty {
    DWORD first;
    DWORD second;
    DWORD third;
    __forceinline Triple();
    ~Triple();
};

struct __declspec(novtable) S : Counts, Head {
    Container container;
    Triple values;
    String name;
    unsigned char enabled;

    S(const char *);
    virtual void dispatch();
};

__forceinline Counts::Counts() : first(0), second(0)
{
}

__forceinline Interface::Interface() : table(0x0082d708)
{
}

__forceinline Head::Head() : flag(0)
{
    signal.table = 0x0082d870;
    *reinterpret_cast<DWORD *>(this) = 0x0082d884;
    interfacePart.table = 0x0082d878;
    signal.secondary = 0x0082d868;
    slots0.table = 0x0082d858;
    slots1.table = 0x0082d848;
    slots2.table = 0x0082d838;
    slots3.table = 0x0082d828;
    slots4.table = 0x0082d818;
    slots5.table = 0x0082d808;
}

__forceinline Container::Container()
{
    Link *p = static_cast<Link *>(operator new(4));
    if (p)
        p->owner = this;
    else
        p = 0;
    link = p;
    first = 0;
    second = 0;
    third = 0;
}

__forceinline Empty::Empty()
{
}

__forceinline Triple::Triple() : first(0), second(0), third(0)
{
}

__forceinline String::String(const char *text)
{
    constructString(this, text);
}

S::S(const char *text) : name(text)
{
    enabled = 1;
    InterlockedIncrement(reinterpret_cast<volatile long *>(0x00973c34));
}
