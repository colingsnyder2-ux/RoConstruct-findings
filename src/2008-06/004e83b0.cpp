// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" long (__stdcall * const incrementReference)(volatile long*);
extern "C" long (__stdcall * const decrementReference)(volatile long*);

struct Control
{
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct ControlRef
{
    Control* pointer;
    ControlRef& assign(const ControlRef&);
};

struct Shared
{
    void* object;
    ControlRef control;
    Shared& operator=(const Shared&);
    ~Shared();
};

struct Node
{
    char padding[0x104];
    Node* parent;
    bool contains(Node*);
};

struct S;

struct Intrusive
{
    S* pointer;
    Intrusive(S*);
    ~Intrusive();
};

struct Callback
{
    virtual void slot0();
    virtual void slot1();
    virtual void invoke(const Intrusive&);
};

struct Holder
{
    void* unused;
    Callback* callback;
};

struct S
{
    virtual ~S();
    volatile long references;
    char padding0[0xb4];
    Shared shared;
    char padding1[0xc];
    Holder* holder;
    void* unused;
    Node* node;

    void cleanup();
    void updateFirst();
    void updateSecond();
    void f(Shared);
};

extern char instanceType;
extern char partType;
extern "C" void* __cdecl runtimeCast(void*, int, void*, void*, int);
extern Node* __cdecl findRoot(Node*);
extern Shared __cdecl makeShared(void*);

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    control.assign(other.control);
    return *this;
}

__forceinline Shared::~Shared()
{
    Control* p = control.pointer;
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

__forceinline Intrusive::Intrusive(S* p)
{
    pointer = p;
    incrementReference(&p->references);
}

__forceinline Intrusive::~Intrusive()
{
    if (pointer)
    {
        if (decrementReference(&pointer->references) == 0)
        {
            pointer->cleanup();
            delete pointer;
        }
        pointer = 0;
    }
}

void S::f(Shared argument)
{
    if (node)
    {
        Node* root = findRoot(node);
        shared = makeShared(
            runtimeCast(node->parent, 0, &instanceType, &partType, 0));

        if (root)
        {
            if (node->contains(root))
            {
                updateFirst();
                updateSecond();
            }
            if (node->contains(root))
                return;
        }

        Intrusive temporary(this);
        holder->callback->invoke(temporary);
    }
}
