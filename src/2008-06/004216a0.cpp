// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl allocate(unsigned int) throw();

struct Control
{
    long reserved;
    volatile long references;
};

struct Arguments
{
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;

    Arguments(const Arguments&) throw();
    ~Arguments() throw();
};

__forceinline Arguments::Arguments(const Arguments& other) throw()
{
    first = other.first;
    firstControl = other.firstControl;
    if (firstControl)
    {
        volatile long* counter = &firstControl->references;
        _InterlockedExchangeAdd(counter, 1);
    }
    second = other.second;
    secondControl = other.secondControl;
    if (secondControl)
    {
        volatile long* counter = &secondControl->references;
        _InterlockedExchangeAdd(counter, 1);
    }
}

struct S;

struct Object
{
    unsigned char storage[32];

    Object* initialize(S*, Object*, Arguments) throw();
};

struct Collection
{
    unsigned char storage[28];

    void insert(Object**) throw();
};

struct Dispatcher
{
    void method(int) throw();
};

struct S
{
    unsigned int reserved;
    Collection collection;
    Dispatcher* dispatcher;

    void invoke(Object*, Arguments);
};

void S::invoke(Object* value, Arguments arguments)
{
    Object* allocation = static_cast<Object*>(allocate(32));
    Object* result;
    if (allocation)
        result = allocation->initialize(this, value, arguments);
    else
        result = 0;

    value = result;
    collection.insert(&value);
    dispatcher->method(reinterpret_cast<int>(result));
}
