// from server: 96% by king_originala
struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };
struct Key {
    float x, y, z;
    int value;
    float u, v;
};

struct Texture {
    char storage[0x8c];
    Texture(const Vec3 *, int, const Vec2 *);
};

void *operator new(unsigned int);
void operator delete(void *);

extern "C" void __cdecl initialize();
extern "C" void __cdecl initialize_once(void (__cdecl *)(), void *);
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;
    Guard(Mutex *);
    ~Guard();
};

inline Guard::Guard(Mutex *m) : mutex(m), locked(false)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct Map;
struct Proxy { Map *container; };

struct Node {
    char padding[0x24];
    Texture *texture;
};

struct Iterator {
    Proxy *owner;
    Node *node;
    bool operator==(const Iterator &) const;
    Texture *get() const;
};

struct Slot {
    void assign(Texture *);
};

struct Map {
    Proxy *proxy;
    char padding[0x14];
    Node *end_node;
    Iterator find(const Key *);
    Iterator end();
    Slot *lookup(const Key *);
};

inline Iterator Map::end()
{
    Iterator result;
    result.owner = proxy;
    result.node = end_node;
    return result;
}

inline bool Iterator::operator==(const Iterator &other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Texture *Iterator::get() const
{
    Map *container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = 0;
    } else {
        container = owner->container;
    }
    if (node == container->end_node)
        _invalid_parameter_noinfo();
    return node->texture;
}

struct State {
    char padding[0x10];
    Mutex mutex;
    char padding2[0x2b];
    Map map;
};

extern State *state;
extern int initialization_token;

Texture *__cdecl get_texture(const Vec3 *position, int value, const Vec2 *size)
{
    initialize_once(initialize, &initialization_token);
    State *s = state;
    Guard guard(&s->mutex);

    Key key;
    key.x = position->x;
    key.y = position->y;
    key.z = position->z;
    key.value = value;
    key.u = size->x;
    key.v = size->y;

    Map *map = &s->map;
    Iterator it = map->find(&key);
    Iterator last = map->end();

    if (it == last) {
        Texture *texture = new Texture(position, value, size);
        Slot *slot = map->lookup(&key);
        slot->assign(texture);
        return texture;
    }

    return it.get();
}
