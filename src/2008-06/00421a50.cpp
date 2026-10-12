// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Control
{
    RefCount* pointer;
    void assign(const Control&);
};

struct Signal
{
    char storage[32];
    void disconnect(void*);
    void connect(void*);
};

struct Instance
{
    char padding[100];
    Signal first;
    Signal second;
};

struct Shared
{
    Instance* pointer;
    Control control;
    ~Shared();
};

extern Shared __cdecl acquire(void*);

struct Service
{
    void reset();
};

struct Window;

struct WindowTable
{
    void* slots[88];
    void (__thiscall* refresh)(Window*);
};

struct Window
{
    WindowTable* table;
    char padding[228];
    Service* service;
};

struct Explorer;

struct ExplorerTable
{
    void* slots[101];
    Window* (__thiscall* getWindow)(Explorer*);
};

struct FlagGuard
{
    unsigned char* flag;
    unsigned char previous;
    FlagGuard(unsigned char&);
    ~FlagGuard();
};

__forceinline FlagGuard::FlagGuard(unsigned char& value)
    : flag(&value), previous(value)
{
    value = 1;
}

__forceinline FlagGuard::~FlagGuard()
{
    *flag = previous;
}

__forceinline Shared::~Shared()
{
    RefCount* p = control.pointer;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Explorer
{
    ExplorerTable* table;
    char padding[884];
    char firstListener[36];
    char secondListener[36];
    Instance* instance;
    Control control;
    unsigned char changing;

    void setInstance(void*);
};

void Explorer::setInstance(void* argument)
{
    FlagGuard guard(changing);

    void* listener = this ? firstListener : 0;
    if (instance)
        instance->first.disconnect(listener);

    listener = this ? secondListener : 0;
    if (instance)
        instance->second.disconnect(listener);

    table->getWindow(this)->service->reset();

    {
        const Shared& value = acquire(argument);
        instance = value.pointer;
        control.assign(value.control);
    }

    listener = firstListener;
    if (instance)
        instance->first.connect(listener);

    listener = secondListener;
    if (instance)
        instance->second.connect(listener);

    Window* window = table->getWindow(this);
    window->table->refresh(window);
}
