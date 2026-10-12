// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Signal {
    void remove(void*);
};

struct Node {
    char padding[0x150];
    Signal first;
    char gap[0x1c];
    Signal second;
    Node* resolve();
};

struct Shared {
    Node* ptr;
    RefCount* count;

    Shared(const Shared& other)
        : ptr(other.ptr), count(other.count) {
        if (count)
            _InterlockedExchangeAdd(&count->strong, 1);
    }

    ~Shared() {
        RefCount* p = count;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
};

struct Guard {
    char storage[8];
    Guard(Shared);
    ~Guard();
};

struct Connection {
    virtual void reserved() = 0;
    virtual ~Connection();
};

struct S {
    char padding0[0xa0];
    int listener0;
    int listener1;
    int listener2;
    char padding1[0xc4];
    Shared model;
    char padding2[0x64];
    Connection* connection0;
    Connection* connection1;
    Connection* connection2;
    Connection* connection3;
    Connection* connection4;

    Shared get();
    void disconnect();
};

void S::disconnect() {
    Guard guard(model);

    Connection* old = connection0;
    connection0 = 0;
    if (old)
        delete old;

    old = connection1;
    connection1 = 0;
    if (old)
        delete old;

    old = connection2;
    connection2 = 0;
    if (old)
        delete old;

    old = connection3;
    connection3 = 0;
    if (old)
        delete old;

    old = connection4;
    connection4 = 0;
    if (old)
        delete old;

    void* listener = this ? &listener0 : 0;
    if (model.ptr)
        model.ptr->first.remove(listener);

    listener = &listener1;
    if (model.ptr)
        model.ptr->second.remove(listener);

    Node* node;
    {
        Shared temporary = get();
        node = temporary.ptr ? temporary.ptr->resolve() : 0;
    }

    if (node)
        node->first.remove(&listener2);
}
