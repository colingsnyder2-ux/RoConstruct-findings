// from server: 86% by king_originala
struct Lock {
    void acquire();
    void release();
};

struct Guard {
    Lock* lock;
    bool active;
    Guard(Lock* p);
    ~Guard();
};

inline Guard::Guard(Lock* p) : lock(p) {
    lock->acquire();
    active = true;
}

inline Guard::~Guard() {
    if (active)
        lock->release();
}

struct Node {
    unsigned char padding[40];
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
    unsigned char padding[20];
    Node* head;
    Iterator* find(Iterator* result, const void* key);
};

extern "C" void (__cdecl * _invalid_parameter_noinfo)();
extern void __cdecl initialize(void (__cdecl *callback)(), void* storage);
extern void __cdecl initializeLock();
extern void __cdecl initializeDefault();
extern Lock* __cdecl getLock();
extern Map* __cdecl getMap();
extern unsigned char lockStorage;
extern unsigned char defaultStorage;
extern void* defaultValue;

void* __cdecl lookup(const void* key) {
    initialize(initializeLock, &lockStorage);
    Guard guard(getLock());

    Iterator iterator;
    getMap()->find(&iterator, key);

    Map* map = getMap();
    Proxy* proxy = iterator.proxy;
    Node* end = map->head;
    Proxy* expected = map->proxy;

    if (!proxy || proxy != expected)
        _invalid_parameter_noinfo();

    Node* node = iterator.node;
    void* result;

    if (node != end) {
        if (!proxy)
            _invalid_parameter_noinfo();

        Map* owner = proxy ? proxy->owner : 0;
        if (node == owner->head)
            _invalid_parameter_noinfo();

        result = node->value;
    } else {
        initialize(initializeDefault, &defaultStorage);
        result = defaultValue;
    }

    return result;
}
