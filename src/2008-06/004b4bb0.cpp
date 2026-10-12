// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Key {
    char padding[8];
    union {
        char text[16];
        char* pointer;
    } storage;
    unsigned int size;
    unsigned int capacity;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct ControlSlot {
    Control* control;
    ControlSlot& operator=(const ControlSlot&);
};

struct Value {
    void* pointer;
    ControlSlot control;
};

struct Node {
    char padding[16];
    void* value;
};

struct Map;

struct Proxy {
    Map* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Map {
    Proxy* proxy;
    char padding[20];
    Node* end;
    void find(Iterator*, Key**);
    Value* lookup(Key**);
};

struct Manager {
    void* current();
    void set(void*);
    void release(void*);
};

extern Manager* __cdecl getManager();

struct Guard {
    void* saved;
    Guard(int);
    __forceinline ~Guard();
};

__forceinline Guard::~Guard() {
    Manager* manager = getManager();
    void* previous = manager->current();
    if (previous != saved) {
        manager->set(saved);
        if (previous)
            manager->release(previous);
    }
}

extern Shared __cdecl createDefault(Key*);
extern Shared* __cdecl getLogger(Shared*);
extern void __cdecl logMessage(void*, int, const char*, ...);

struct S {
    char padding[0x2cfc];
    Map objects;
    void* f(Key*);
};

void* S::f(Key* key) {
    Guard guard(6);
    Key* original = key;
    Map* map = &objects;
    void* result;

    {
        Iterator iterator;
        key = original;
        map->find(&iterator, &key);

        Proxy* proxy = iterator.proxy;
        Node* end = map->end;
        Proxy* expected = map->proxy;

        if (!proxy || proxy != expected)
            _invalid_parameter_noinfo();

        if (iterator.node == end)
            goto create;

        Map* owner = reinterpret_cast<Map*>(proxy);
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            owner = proxy->owner;

        if (iterator.node == owner->end)
            _invalid_parameter_noinfo();

        result = iterator.node->value;
        goto done;
    }

create:
    {
        Shared value = createDefault(original);
        if (!value.pointer) {
            Shared logger;
            Shared* logging = getLogger(&logger);
            logMessage(logging->pointer, 3,
                       "Replication: Can't create default object of type %s",
                       original->capacity >= 16
                           ? original->storage.pointer
                           : original->storage.text);
        }

        key = original;
        Value* destination = map->lookup(&key);
        destination->pointer = value.pointer;
        destination->control =
            *reinterpret_cast<ControlSlot*>(&value.control);
        result = value.pointer;
    }

done:
    return result;
}
