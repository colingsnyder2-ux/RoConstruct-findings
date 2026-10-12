// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;
    Count& operator=(const Count&);
    ~Count();
};

__forceinline Count::~Count()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

template<class T> struct Shared {
    T* pointer;
    Count count;
    Shared();
    Shared(const Shared&);
    Shared& operator=(const Shared&);
    ~Shared();
    void reset();
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
{
    pointer = other.pointer;
    count.control = other.count.control;
    if (count.control)
        _InterlockedExchangeAdd(&count.control->strong, 1);
}

template<class T>
__forceinline Shared<T>& Shared<T>::operator=(const Shared& other)
{
    pointer = other.pointer;
    count = other.count;
    return *this;
}

template<class T>
__forceinline Shared<T>::~Shared()
{
}

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Network;

struct Connection {
    virtual void unused() = 0;
    virtual void attach(void*) = 0;
    void disconnect(int);
    void setNetwork(Shared<Network>);
};

struct Found {
    char prefix[0xe4];
    char signal;
};

struct Source {
    Found* find(const String&);
};

struct Dispatcher {
    typedef void* (__thiscall *Method)(Dispatcher*, unsigned long, unsigned long);
    struct Table {
        void* reserved[67];
        Method invoke;
    };
    Table* table;
};

struct S;

struct Binder {
    unsigned long words[2];
};

extern Shared<Network> __cdecl getNetwork(void*);
extern Binder __cdecl makeBinder(S*);
extern Shared<Connection> __cdecl build(Binder, void*);

struct S {
    char prefix[0x110];
    char attachment[0x2b88 - 0x110];
    Shared<Connection> connection;
    char padding[0x2d50 - 0x2b90];
    Dispatcher* dispatcher;
    unsigned long first;
    unsigned long second;
    void f(Source*);
};

void S::f(Source* source)
{
    if (connection.pointer) {
        connection.pointer->disconnect(0);
        connection.reset();
    }

    if (source) {
        Found* found;
        Shared<Network> network = getNetwork(
            (found = source->find(String("Network")))
                ? &found->signal : 0);

        if (network.pointer) {
            connection = build(
                makeBinder(this),
                dispatcher->table->invoke(dispatcher, first, second));
            connection.pointer->attach(attachment);
            connection.pointer->setNetwork(network);
        }
    }
}
