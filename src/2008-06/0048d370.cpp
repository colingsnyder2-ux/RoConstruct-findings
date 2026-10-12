// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Owner
{
    void* pointer;
    Control* control;

    Owner(const Owner&);
    ~Owner();
};

inline Owner::Owner(const Owner& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Owner::~Owner()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Element
{
    unsigned long data[2];
};

struct Iterator
{
    void* unused;
    Element* current;
};

struct Function
{
    void (__cdecl *callback)(Owner*, Element*);
    Owner owner;

    Function(const Function&);
};

inline Function::Function(const Function& other)
    : callback(other.callback), owner(other.owner)
{
}

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    Element* current = first.current;
    Element* end = last.current;
    for (; current != end; ++current)
        function.callback(&function.owner, current);
    return function;
}
