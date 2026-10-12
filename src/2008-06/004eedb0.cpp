// from server: 90% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct Texture {
    unsigned char storage[0x8c];
    Texture(const Vector3&, int, const Vector2&);
};

struct Key {
    float x, y, z;
    int value;
    float u, v;
};

struct Node {
    unsigned char padding[0x24];
    Texture* texture;
};

struct Map;

struct Proxy {
    Map* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;

    Iterator(Proxy*, Node*);
    bool operator==(const Iterator&) const;
    Texture* get() const;
};

struct Slot {
    void set(Texture*);
};

struct Map {
    Proxy* proxy;
    unsigned char padding[0x14];
    Node* sentinel;

    Iterator find(const Key&);
    Iterator end();
    Slot& operator[](const Key&);
};

inline Iterator::Iterator(Proxy* p, Node* n) : proxy(p), node(n) {}

inline Iterator Map::end() {
    return Iterator(proxy, sentinel);
}

inline bool Iterator::operator==(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return node == other.node;
}

inline Texture* Iterator::get() const {
    Map* owner;
    if (!proxy) {
        invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = proxy->owner;
    }
    if (node == owner->sentinel)
        invalid_parameter_noinfo();
    return node->texture;
}

struct Mutex {
    unsigned char storage[0x2c];
    void lock();
    void unlock();
};

struct State {
    unsigned char padding[0x10];
    Mutex mutex;
    Map map;
};

struct Lock {
    Mutex* mutex;
    bool locked;

    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(&m), locked(false) {
    mutex->lock();
    locked = true;
}

inline Lock::~Lock() {
    if (locked)
        mutex->unlock();
}

extern State* state;
extern int initializationFlag;
void __cdecl initialize();
void __cdecl ensureInitialized(void (__cdecl*)(), int*);

Texture* __cdecl getTexture(const Vector3& position, int value,
                           const Vector2& dimensions) {
    ensureInitialized(initialize, &initializationFlag);
    State* s = state;
    Lock lock(s->mutex);

    Key key;
    key.x = position.x;
    key.y = position.y;
    key.z = position.z;
    key.value = value;
    key.u = dimensions.x;
    key.v = dimensions.y;

    Map* map = &s->map;
    Iterator found = map->find(key);

    if (found == map->end()) {
        Texture* result = new Texture(position, value, dimensions);
        Slot& slot = (*map)[key];
        slot.set(result);
        return result;
    }

    return found.get();
}
