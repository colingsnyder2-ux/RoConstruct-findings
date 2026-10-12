// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int) throw();

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&) throw();
    ~Shared() throw();
};

struct S;

struct Node
{
    unsigned char storage[24];

    Node(S*, int, Shared) throw();
};

struct Container
{
    unsigned char storage[28];

    void insert(Node* const&) throw();
};

struct Dispatcher
{
    void* field0;
    void* field4;

    void method(int) throw();
};

struct S
{
    void* field0;
    Container pending;
    Dispatcher* dispatcher;

    void method(int, Shared) throw();
};

__forceinline Shared::~Shared() throw()
{
    Control* c = control;
    if (c)
    {
        if (_InterlockedDecrement(&c->strong) == 0)
        {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

void S::method(int argument, Shared value) throw()
{
    Node* node = new Node(this, argument, value);
    argument = reinterpret_cast<int>(node);
    pending.insert(reinterpret_cast<Node* const&>(argument));
    dispatcher->method(reinterpret_cast<int>(node));
}
