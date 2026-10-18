// from server: 91% by colin
struct Storage
{
    unsigned long a, b;

    Storage() : a(0), b(0) {}
    ~Storage();
};

struct Temporary : Storage
{
    unsigned long c;

    Temporary(void *p);
    void initialize(void *p);
    ~Temporary();
};

inline Temporary::Temporary(void *p) : c(0)
{
    initialize(p);
}

struct Argument
{
    char pad[0x14];
    unsigned char data;
};

struct Source
{
    char pad[0x198];
    void *value;
};

struct Target
{
    struct VTable
    {
        void *pad[3];
        void (__thiscall *method)(Target *, void *, unsigned long);
    };

    VTable *vtable;
};

struct Link
{
    char pad[0x18];
    Target *target;
};

struct S
{
    char pad[0x13c];
    Source *source;
    Link *link;

    void f(Argument *argument, unsigned long value);
};

void S::f(Argument *argument, unsigned long value)
{
    Temporary temporary(source->value);
    void *p = 0;
    if (argument)
        p = (char*)argument + 0x14;
    Target *target = link->target;
    target->vtable->method(target, p, value);
}
