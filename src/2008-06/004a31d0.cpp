// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char scriptType;

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
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

struct Script
{
    char padding[0x130];
    const char* external;
    char gap[4];
    char internal[0x14];
    int discriminator;
};

struct Result
{
    void* iterator[2];
    bool inserted;
};

struct Collection
{
    Result insert(const char*);
};

struct ClientProxy
{
    char padding[0x164];
    Collection collection;
    void process(Shared value);
};

void ClientProxy::process(Shared value)
{
    Script* script = static_cast<Script*>(
        __RTDynamicCast(value.object, 0, &instanceType, &scriptType, 0));

    if (script)
    {
        if (script->discriminator == 0)
            collection.insert(script->external);
        else
            collection.insert(script->internal);
    }
}
