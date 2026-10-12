// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long use_count;
    volatile long weak_count;
};

struct Property
{
    virtual void set(bool value);
};

struct Object
{
    char padding[0x1F0];
    Property property;
};

struct Shared
{
    Object* object;
    RefCount* count;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    RefCount* p = count;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->use_count, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak_count, -1) == 0)
                p->destroy();
        }
    }
}

struct Holder
{
    Shared get();
};

struct CRobloxDoc
{
    char padding0[0x48];
    int state;
    char padding1[0x48];
    Holder* holder;

    void func_0044fad0(int value);
};

void CRobloxDoc::func_0044fad0(int value)
{
    state = value;
    if (holder)
        holder->get().object->property.set(value == 1);
}
