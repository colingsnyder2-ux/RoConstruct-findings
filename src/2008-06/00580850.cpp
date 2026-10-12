// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Children
{
    char padding[12];
    char* begin;
    char* end;
};

struct Object
{
    char padding[0x154];
    Children* children;
    Shared first();
    Shared second();
};

struct Holder
{
    Object* get();
};

int __cdecl matches(void*, void*);

struct JoinCommand
{
    char padding[12];
    Holder* holder;
    bool execute();
};

bool JoinCommand::execute()
{
    Object* p = holder ? holder->get() : 0;
    if (((p->children->end - p->children->begin) & ~7) == 16)
    {
        Shared a = p->first();
        Shared b = p->second();
        if ((unsigned char)matches(a.object, b.object))
            return true;
    }
    return false;
}
