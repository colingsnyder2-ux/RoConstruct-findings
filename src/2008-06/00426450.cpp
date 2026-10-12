// from server: 56% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    RefCount* count;
    Handle();
    ~Handle();
};

struct Mutex {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex* p);
    ~Lock();
    void release();
};

struct List;
struct Owner {
    List* container;
};

struct Node {
    Node* next;
    char padding[8];
    void* pointer;
    RefCount* count;
};

struct Iterator {
    Owner* owner;
    Node* node;
    bool equal(const Iterator& other) const;
    const Handle& get() const;
};

struct List {
    Owner* owner;
    char padding[20];
    Node* head;
    Iterator erase(Iterator position);
};

struct Context {
    char padding[0xc4];
    Mutex mutex;
};

struct S {
    char padding[0x58];
    Context* context;
    char reserved[4];
    List list;
    void process(const Handle* handle);
    void f();
};

__forceinline Handle::Handle() : pointer(0), count(0)
{
}

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Lock::Lock(Mutex* p) : mutex(p)
{
    mutex->lock();
    locked = true;
}

__forceinline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

__forceinline void Lock::release()
{
    locked = false;
    mutex->unlock();
}

__forceinline bool Iterator::equal(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

__forceinline const Handle& Iterator::get() const
{
    if (!owner)
        _invalid_parameter_noinfo();
    List* container = owner ? owner->container : 0;
    if (node == container->head)
        _invalid_parameter_noinfo();
    return *reinterpret_cast<const Handle*>(&node->pointer);
}

void S::f()
{
    List* items = &list;
    for (int i = 0; i < 10; ++i) {
        Handle handle;
        Lock lock(&context->mutex);

        Iterator position;
        position.owner = items->owner;
        position.node = items->head->next;

        Iterator end;
        end.owner = items->owner;
        end.node = items->head;

        if (position.equal(end))
            return;

        const Handle& value = position.get();
        handle.pointer = value.pointer;
        RefCount* p = value.count;
        if (p) {
            _InterlockedExchangeAdd(&p->strong, 1);
            handle.count = p;
        }

        items->erase(position);
        lock.release();
        process(&handle);
    }
}
