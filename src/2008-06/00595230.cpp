// from server: 96% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


extern "C" void (__cdecl * const invalid_parameter_noinfo)();

typedef void (__cdecl *Callback)(void*, void*);
typedef void (__cdecl *InvalidHandler)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node {
    Node* next;
    Node* previous;
    void* first;
    void* second;
    Callback callback;
};

struct Container {
    void* fields[5];
    Node* head;
};

struct Proxy {
    Container* owner;
};

struct Connection {
    void* first;
    void* second;
    Callback callback;
    void* unused;
    Proxy* proxy;
    void* fields[4];
    Node* head;
};

struct Holder {
    Connection* pointer;
    Control* control;
    __forceinline Holder(const Holder&);
    __forceinline ~Holder();
};

__forceinline Holder::Holder(const Holder& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Holder::~Holder() {
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

struct Iterator {
    Node* node;
    Proxy* proxy;
    __forceinline Node& dereference(InvalidHandler) const;
    __forceinline void advance(InvalidHandler);
};

__forceinline Node& Iterator::dereference(InvalidHandler invalid) const {
    if (!proxy)
        invalid();
    Container* owner = proxy ? proxy->owner : 0;
    if (node == owner->head)
        invalid();
    return *node;
}

__forceinline void Iterator::advance(InvalidHandler invalid) {
    if (!proxy)
        invalid();
    Container* owner = proxy ? proxy->owner : 0;
    if (node == owner->head)
        invalid();
    node = node->next;
}

struct S {
    void* unused;
    Holder connection;
    void disconnect();
};

void S::disconnect() {
    if (connection.pointer && connection.pointer->callback) {
        Holder hold(connection);
        Callback callback = hold.pointer->callback;
        hold.pointer->callback = 0;
        void* second = hold.pointer->second;
        void* first = hold.pointer->first;
        callback(first, second);

        Iterator it;
        it.node = hold.pointer->head->next;
        it.proxy = hold.pointer->proxy;

        for (;;) {
            Node* end = hold.pointer->head;
            Proxy* endProxy = hold.pointer->proxy;
            if (!it.proxy || it.proxy != endProxy)
                invalid_parameter_noinfo();
            if (it.node == end)
                break;
            InvalidHandler invalid = invalid_parameter_noinfo;
            it.dereference(invalid).callback(
                it.dereference(invalid).first,
                it.dereference(invalid).second);
            it.advance(invalid);
        }
    }
}
