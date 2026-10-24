// from server: 96% by king_originala
#include <intrin.h>
// from server: 81% by EspClaude
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);

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

struct Listener1 { char storage[36]; };
struct Listener2 { char storage[36]; };

struct Signal
{
    char storage[32];
    void disconnect(Listener1*);
    void connect(Listener1&);
};

struct Signal2
{
    char storage[32];
    void disconnect(Listener2*);
    void connect(Listener2&);
};

struct Instance
{
    char padding[100];
    Signal first;
    Signal2 second;
};

struct Shared
{
    Instance* pointer;
    Control control;
    ~Shared();
    Shared& operator=(const Shared& r)
    {
        pointer = r.pointer;
        control.assign(r.control);
        return *this;
    }
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
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct ExplorerBase
{
    ExplorerTable* table;
    char padding[884];
};

struct Explorer : ExplorerBase, Listener1, Listener2
{
    Shared instance;
    unsigned char changing;

    void setInstance(void*);
};

inline void disconnect1(const Shared& i, Listener1* l) { if (i.pointer) i.pointer->first.disconnect(l); }
inline void disconnect2(const Shared& i, Listener2* l) { if (i.pointer) i.pointer->second.disconnect(l); }
inline void connect1(Instance* i, Listener1& l) { if (i) i->first.connect(l); }
inline void connect2(Instance* i, Listener2& l) { if (i) i->second.connect(l); }

void Explorer::setInstance(void* argument)
{
    FlagGuard guard(changing);

    disconnect1(instance, this);
    disconnect2(instance, this);

    table->getWindow(this)->service->reset();

    instance = acquire(argument);

    connect1(instance.pointer, *this);
    connect2(instance.pointer, *this);

    Window* window = table->getWindow(this);
    window->table->refresh(window);
}
