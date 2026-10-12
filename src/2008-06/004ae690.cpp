// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter)();
typedef void (__cdecl *Failure)();

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
    Shared get() const;
};

template<class T>
inline Shared<T>::Shared(const Shared<T>& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
inline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Item;
struct Vector;

struct Proxy
{
    Vector* owner;
};

struct Iterator
{
    Proxy* proxy;
    Shared<Item>* position;
    void check(const Iterator&, Failure) const;
    Shared<Item>& value(Failure) const;
    void advance(Failure);
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Item>* first;
    Shared<Item>* last;
    Iterator begin(Failure);
    Iterator end(Failure);
};

inline Iterator Vector::end(Failure fail)
{
    Shared<Item>* p = last;
    if (first > p)
        fail();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

inline Iterator Vector::begin(Failure fail)
{
    Shared<Item>* p = first;
    if (p > last)
        fail();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

inline void Iterator::check(const Iterator& other, Failure fail) const
{
    if (!proxy || proxy != other.proxy)
        fail();
}

inline Shared<Item>& Iterator::value(Failure fail) const
{
    Vector* owner;
    if (!proxy)
    {
        fail();
        owner = 0;
    }
    else
        owner = proxy->owner;
    if (position >= owner->last)
        fail();
    return *position;
}

inline void Iterator::advance(Failure fail)
{
    Vector* owner;
    if (!proxy)
    {
        fail();
        owner = 0;
    }
    else
        owner = proxy->owner;
    if (position >= owner->last)
        fail();
    ++position;
}

struct Callback
{
    unsigned long state[2];
    void invoke(int, Shared<Item>);
};

struct S
{
    unsigned char padding[0x108];
    Shared<Vector> entries;
    void f(Callback, int, int);
};

void S::f(Callback callback, int argument, int)
{
    if (entries.object)
    {
        Shared<Vector> snapshot = entries.get();
        Vector* vector = snapshot.object;
        Failure fail = invalid_parameter;
        Iterator finish = vector->end(fail);
        Iterator current = vector->begin(fail);
        for (;;)
        {
            current.check(finish, fail);
            if (current.position == finish.position)
                break;
            callback.invoke(argument, current.value(fail));
            current.advance(fail);
        }
    }
}
