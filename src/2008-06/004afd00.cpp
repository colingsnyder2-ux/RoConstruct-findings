// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Shared {
    Object* ptr;
    Control* control;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

#pragma pointers_to_members(full_generality, multiple_inheritance)

struct S;

struct Callback {
    bool (S::*method)(Shared);
    S* object;
    char unused;
};

struct Object {
    void apply(Callback);
    void detach(int);
};

struct Signal {
    char data[16];
    void clear();
};

struct Node {
    char prefix[16];
    Object* object;
    int padding;
    Signal first;
    Signal second;
    bool active;
};

struct Map;

struct Proxy {
    Map* container;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Map {
    Proxy* proxy;
    char padding[20];
    Node* end;
    Iterator* find(Iterator*, Object* const*);
    Iterator* erase(Iterator*, Proxy*, Node*);
};

struct S {
    char padding[0x2c38];
    Map entries;
    bool remove(Shared);
};

bool S::remove(Shared value) {
    if (!value.ptr)
        return false;

    Object* key = value.ptr;
    Map* map = &entries;
    Iterator position;
    map->find(&position, &key);

    Proxy* proxy = position.proxy;
    Node* end = map->end;
    if (!proxy || proxy != map->proxy)
        _invalid_parameter_noinfo();

    Node* node = position.node;
    if (node == end)
        return false;

    Callback callback;
    callback.method = &S::remove;
    callback.object = this;
    value.ptr->apply(callback);

    Map* container = proxy
        ? proxy->container
        : (_invalid_parameter_noinfo(), (Map*)0);

    if (node == container->end)
        _invalid_parameter_noinfo();

    node->first.clear();
    node->second.clear();

    if (node->active)
        node->object->detach(0);

    map->erase(&position, proxy, node);
    return true;
}
