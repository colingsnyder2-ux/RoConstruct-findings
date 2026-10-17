// from server: 87% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __stdcall SysFreeString(wchar_t*);

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose();
    virtual void destroy();

    volatile long use_count;
    volatile long weak_count;
};

struct Shared
{
    void* object;
    RefCount* count;

    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->use_count) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak_count) == 0)
            p->destroy();
    }
}

struct Owner;

struct OwnerTable
{
    void* slots[7];
    long (__stdcall *invoke)(Owner*, wchar_t*);
};

struct Owner
{
    OwnerTable* table;
    Shared get();
};

extern bool __cdecl checkFirst(void*, int);
extern bool __cdecl checkSecond(void*, int);

struct String
{
    wchar_t* value;

    String(const wchar_t*);
    ~String();
};

inline String::~String()
{
    SysFreeString(value);
}

struct CRobloxDoc;

struct DocumentTable
{
    void* slots[25];
    void (__thiscall *notify)(CRobloxDoc*, int);
};

struct CRobloxDoc
{
    DocumentTable* table;
    char padding[0x90];
    Owner* owner;

    int func_0044f9b0(const wchar_t*);
};

int CRobloxDoc::func_0044f9b0(const wchar_t* text)
{
    bool rejected;
    {
        Shared state = owner->get();
        void* object = state.object;
        rejected = !(checkFirst(object, 1) && checkSecond(object, 1));
    }

    if (rejected)
        return 0;

    bool failed =
        owner->table->invoke(owner, String(text).value) != 0;

    if (failed)
        return 0;

    table->notify(this, 0);
    return 1;
}
