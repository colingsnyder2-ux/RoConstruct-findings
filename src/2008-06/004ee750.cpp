// from server: 88% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Key {
    Vector3 position;
    int kind;
};

struct Texture {
    unsigned char storage[140];
    Texture(const Vector3&, int);
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void (__cdecl* invalid_parameter_noinfo)();

struct Map;

struct Proxy {
    Map* owner;
};

struct Node {
    unsigned char padding[28];
    Texture* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Slot {
    void assign(Texture*);
};

struct Map {
    Proxy* proxy;
    unsigned char padding[20];
    Node* head;

    Iterator find(const Key&);
    Slot& operator[](const Key&);
    Iterator end();
};

inline Iterator Map::end()
{
    Iterator result;
    result.proxy = proxy;
    result.node = head;
    return result;
}

struct Mutex {
    unsigned char storage[12];
    void lock();
    void unlock();
};

struct State {
    unsigned char padding[16];
    Mutex mutex;
    Map map;
};

extern State* state;
extern unsigned char initialization;
extern void __cdecl initialize();
extern void __cdecl ensure_initialized(void (__cdecl*)(), void*);

struct Guard {
    Mutex* mutex;
    bool locked;

    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

Texture* __cdecl getTexture(const Vector3* position, int kind)
{
    ensure_initialized(initialize, &initialization);
    State* s = state;
    Guard guard(&s->mutex);

    Key key;
    key.position.x = position->x;
    key.position.y = position->y;
    key.position.z = position->z;
    key.kind = kind;

    Map* map = &s->map;
    Iterator it = map->find(key);
    Iterator end = map->end();
    Proxy* proxy = it.proxy;

    if (!proxy || proxy != end.proxy)
        invalid_parameter_noinfo();

    if (it.node == end.node) {
        Texture* texture = new Texture(*position, kind);
        Slot& slot = (*map)[key];
        slot.assign(texture);
        return texture;
    }

    Map* owner;
    if (!proxy) {
        invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = proxy->owner;
    }

    if (it.node == owner->head)
        invalid_parameter_noinfo();

    return it.node->value;
}
