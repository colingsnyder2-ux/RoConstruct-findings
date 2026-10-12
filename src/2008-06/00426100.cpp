// from server: 65% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entity {
    char padding[0x1c];
    int id;
};

struct Handle {
    Entity* pointer;
    RefCount* count;
    Handle(const Handle&);
    ~Handle();
};

inline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Result {
    int get();
};

struct Manager {
    int invoke(int, int);
};

struct ManagerHandle {
    Manager* pointer;
    RefCount* count;
    ~ManagerHandle();
};

inline ManagerHandle::~ManagerHandle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

ManagerHandle __cdecl acquire();

struct Mutex {
    void lock();
    void unlock();
};

struct Owner {
    char padding[0xc4];
    Mutex mutex;
};

struct Node;

struct Pair {
    Entity* key;
    Node* value;
};

struct Iterator {
    void* owner;
    void* position;
    Pair* get();
    bool operator!=(const Iterator&) const;
};

inline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

struct Map {
    void* owner;
    char padding[0x14];
    void* sentinel;
    Iterator find(Entity* const&);
    Iterator end() const;
};

inline Iterator Map::end() const
{
    Iterator result;
    result.owner = owner;
    result.position = sentinel;
    return result;
}

struct Lock {
    Mutex& mutex;
    bool locked;
    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(m), locked(false)
{
    mutex.lock();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex.unlock();
}

struct Node {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void update();
    char padding0[0x10];
    Map children;
    char padding1[0x28];
    Owner* owner;
    char padding2[0x30];

    Node(Node*, Handle, Owner*);
    Node* findChild(const Handle&);
};

Node* Node::findChild(const Handle& handle)
{
    ManagerHandle manager = acquire();
    Result* result = (Result*)manager.pointer->invoke(handle.pointer->id, 1);
    if (!result || result->get() < 0)
        return 0;

    {
        Lock lock(owner->mutex);
        Entity* key = handle.pointer;
        Iterator it = children.find(key);
        Iterator last = children.end();
        if (it != last)
            return it.get()->value;
    }

    Node* node = new Node(this, handle, owner);
    node->update();
    return node;
}
