// from server: 68% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma pointers_to_members(full_generality, multiple_inheritance)

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Object
{
    char prefix[20];
};

struct CountHandle
{
    RefCount* count;
    CountHandle& operator=(const CountHandle&);
};

struct Shared
{
    Object* object;
    CountHandle handle;

    Shared& operator=(const Shared&);
    ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    handle = other.handle;
    return *this;
}

__forceinline Shared::~Shared()
{
    if (handle.count)
    {
        RefCount* p = handle.count;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Settings;

struct Callback
{
    void (Settings::*function)();
    Settings* owner;
};

struct Function
{
    char storage[40];
    Function(const Callback&);
    ~Function();
};

struct Connection
{
    char storage[16];
    ~Connection();
};

struct ConnectionHandle
{
    char storage[16];
    ConnectionHandle& operator=(const Connection&);
    void clear();
};

struct Dispatcher
{
    Connection connect(void*, const Function&, int);
};

extern Dispatcher dispatcher;
extern char propertyDescriptor;
extern Shared __cdecl acquire(Object*);

struct Settings
{
    char prefix[0x154];
    Shared shared;
    ConnectionHandle connection;

    void callback();
    void notify(const void*);
    void update(int, Object*);
    void set(Object*);
};

void Settings::set(Object* value)
{
    if (value == shared.object)
        return;

    shared = acquire(value);

    notify(&propertyDescriptor);
    update(1, shared.object);

    if (shared.object)
    {
        Callback callbackValue;
        callbackValue.function = &Settings::callback;
        callbackValue.owner = this;

        Function function(callbackValue);
        connection = dispatcher.connect(
            shared.object ? reinterpret_cast<char*>(shared.object) + 20 : 0,
            function, 10);
    }
    else
    {
        connection.clear();
    }
}
