// from server: 87% by king_originala
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

template<class T> struct Shared
{
    T* object;
    Control* control;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

template<class T>
__forceinline Shared<T>::Shared() : object(0), control(0)
{
}

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Input;
struct Output;

struct Source
{
    Shared<Input> get();
};

Shared<Output> __cdecl convert(const Shared<Input>&);

Shared<Output> __cdecl reconstruct(Source* source)
{
    return source ? convert(source->get()) : Shared<Output>();
}
