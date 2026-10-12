// from server: 96% by king_originala
typedef unsigned int size_t;

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct Key {
    Vector3 position;
    int kind;
    Vector2 size;
};

struct Texture {
    char storage[0x8c];
    Texture(const Vector3&, int, const Vector2&);
};

struct Mutex {
    void lock();
    void unlock();
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

struct Map;

struct Proxy {
    Map* owner;
};

struct Node {
    char padding[0x24];
    Texture* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    bool operator==(const Iterator&) const;
    Node& operator*() const;
};

struct Slot {
    void assign(Texture*);
};

struct Map {
    Proxy* proxy;
    char padding[0x14];
    Node* sentinel;
    Iterator find(const Key&);
    Slot* insert(const Key&);
};

inline bool Iterator::operator==(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Node& Iterator::operator*() const {
    Map* owner;
    if (!proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = proxy->owner;
    }
    if (node == owner->sentinel)
        _invalid_parameter_noinfo();
    return *node;
}

struct State {
    char padding0[0x10];
    Mutex mutex;
    char padding1[0x2b];
    Map map;
};

extern State* state;
extern int initializationToken;
void __cdecl initializeState();
void __cdecl ensureInitialized(void (__cdecl*)(), int*);

Texture* __cdecl getTexture(const Vector3& position, int kind,
                           const Vector2& size) {
    ensureInitialized(initializeState, &initializationToken);

    State* current = state;
    Lock lock(current->mutex);

    Key key;
    key.position.x = position.x;
    key.position.y = position.y;
    key.position.z = position.z;
    key.kind = kind;
    key.size.x = size.x;
    key.size.y = size.y;

    Map* map = &current->map;
    Iterator found = map->find(key);
    Iterator end;
    end.proxy = map->proxy;
    end.node = map->sentinel;

    if (found == end) {
        Texture* result = new Texture(position, kind, size);
        Slot* slot = map->insert(key);
        slot->assign(result);
        return result;
    }

    return (*found).value;
}
