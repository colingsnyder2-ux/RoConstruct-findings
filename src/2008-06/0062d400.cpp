// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter)();

struct Object;
struct Vector;
typedef void (__cdecl* ErrorHandler)();

struct Counter
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* pointer;
    Counter* counter;
    Shared(const Shared& other);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared(const Shared& other)
    : pointer(other.pointer), counter(other.counter)
{
    if (counter)
        _InterlockedExchangeAdd(&counter->strong, 1);
}

template<class T>
inline Shared<T>::~Shared()
{
    Counter* p = counter;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Holder
{
    Vector* pointer;
    Counter* counter;
    Shared<Vector> get();
};

struct Vector
{
    Vector** proxy;
    unsigned long reserved[2];
    Shared<Object>* first;
    Shared<Object>* last;
};

struct Iterator
{
    Vector** proxy;
    Shared<Object>* position;
    Vector* container(ErrorHandler error) const;
    Shared<Object>& dereference(ErrorHandler error) const;
    void increment(ErrorHandler error);
};

inline Vector* Iterator::container(ErrorHandler error) const
{
    if (!proxy)
    {
        error();
        return 0;
    }
    return *proxy;
}

inline Shared<Object>& Iterator::dereference(ErrorHandler error) const
{
    if (position >= container(error)->last)
        error();
    return *position;
}

inline void Iterator::increment(ErrorHandler error)
{
    if (position >= container(error)->last)
        error();
    ++position;
}

struct Visitor
{
    void (__cdecl* function)(Shared<Object>, unsigned long, unsigned long);
    unsigned long first;
    unsigned long second;
};

struct Object
{
    unsigned char reserved[0x108];
    Holder children;
    void visit(Visitor visitor);
};

void Object::visit(Visitor visitor)
{
    if (children.pointer)
    {
        Shared<Vector> collection = children.get();
        Vector* vector = collection.pointer;
        Shared<Object>* finish = vector->last;
        ErrorHandler error = invalid_parameter;

        if (vector->first > finish)
            error();

        Iterator current;
        current.position = vector->first;
        Vector** expected = vector->proxy;

        if (current.position > vector->last)
            error();

        current.proxy = vector->proxy;
        for (;;)
        {
            if (!current.proxy || current.proxy != expected)
                error();

            if (current.position == finish)
                break;

            Shared<Object>& child = current.dereference(error);
            visitor.function(child, visitor.first, visitor.second);
            current.dereference(error).pointer->visit(visitor);
            current.increment(error);
        }
    }
}
