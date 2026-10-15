// from server: 99% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
}

void* __cdecl operator new(unsigned int);
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
    unsigned char storage[0x8c];
    Texture(const Vector3&, int, const Vector2&);
};

struct Reference {
    Texture* pointer;
    void assign(Texture*);
};

struct Node {
    unsigned char padding[0x24];
    Texture* texture;
};

struct Map;

struct Proxy {
    Map* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    bool equals(const Iterator&) const;
    Node* dereference() const;
};

struct Map {
    Proxy* proxy;
    unsigned char padding[0x14];
    Node* end;
    void find(Iterator*, const Key*);
    Reference* lookup(const Key*);
    Iterator finish();
};

inline Iterator Map::finish() {
    Iterator result;
    result.owner = proxy;
    result.node = end;
    return result;
}

inline bool Iterator::equals(const Iterator& other) const {
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Node* Iterator::dereference() const {
    Map* container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = 0;
    } else {
        container = owner->container;
    }
    if (node == container->end)
        _invalid_parameter_noinfo();
    return node;
}

struct Mutex {
    void lock();
    void unlock();
};

struct State {
    unsigned char prefix[0x10];
    Mutex mutex;
    unsigned char padding[0x2b];
    Map map;
};

extern State* state;
extern int initialization;
extern void __cdecl initializeState();
extern void __cdecl initialize(void (__cdecl*)(), int*);

struct Guard {
    Mutex* mutex;
    bool active;
    Guard(Mutex*);
    ~Guard();
};

Guard::Guard(Mutex* p) : mutex(p) {
    mutex->lock();
    active = true;
}

Guard::~Guard() {
    if (active)
        mutex->unlock();
}

Texture* __cdecl getTexture(const Vector3& position, int kind,
                            const Vector2& size) {
    initialize(initializeState, &initialization);
    State* s = state;
    Guard guard(&s->mutex);

    Key key;
    key.position.x = position.x;
    key.position.y = position.y;
    key.position.z = position.z;
    key.kind = kind;
    key.size.x = size.x;
    key.size.y = size.y;

    Map* map = &s->map;
    Iterator iterator;
    map->find(&iterator, &key);

    Iterator end = map->finish();
    if (iterator.equals(end)) {
        Texture* result = new Texture(position, kind, size);
        Reference* reference = map->lookup(&key);
        reference->assign(result);
        return result;
    }

    Proxy* owner = iterator.owner;
    if (!owner)
        _invalid_parameter_noinfo();

    Map* container = owner ? owner->container : 0;
    if (iterator.node == container->end)
        _invalid_parameter_noinfo();

    return iterator.node->texture;
}
