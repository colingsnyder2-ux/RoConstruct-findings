// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared {
    T* ptr;
    Control* control;

    Shared(const Shared&);
    ~Shared();
    Shared acquire() const;
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
    : ptr(other.ptr), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Node;
struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Shared<Node>* position;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Node>* first;
    Shared<Node>* last;
    Shared<Node>* limit;
};

struct Context {
    void* value;
    void apply(int, Shared<Node>);
};

struct Node {
    unsigned char reserved[0x108];
    Shared<Vector> children;
    void visit(Context, volatile int);
};

void Node::visit(Context context, volatile int value)
{
    if (children.ptr) {
        Shared<Vector> storage = children.acquire();
        Vector* vector = storage.ptr;

        Iterator finish;
        finish.position = vector->last;
        void (__cdecl* invalid)() = invalid_parameter_noinfo;
        if (vector->first > finish.position)
            invalid();

        Iterator current;
        current.position = vector->first;
        finish.proxy = vector->proxy;
        if (current.position > vector->last)
            invalid();
        current.proxy = vector->proxy;

        for (;;) {
            if (!current.proxy || current.proxy != finish.proxy)
                invalid();

            if (current.position == finish.position)
                break;

            if (!current.proxy)
                invalid();
            Vector* owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            context.apply(value, *current.position);

            if (!current.proxy)
                invalid();
            owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            current.position->ptr->visit(context, value);

            if (!current.proxy)
                invalid();
            owner = current.proxy ? current.proxy->owner : 0;
            if (current.position >= owner->last)
                invalid();

            ++current.position;
        }
    }
}
