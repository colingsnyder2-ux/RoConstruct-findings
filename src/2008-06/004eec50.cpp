// from server: 82% by king_originala
struct Vector {
    float x, y, z;
};

struct Key {
    float x, y, z;
    int value;
};

struct Texture {
    char storage[140];
    Texture(const Vector *, int);
};

struct Node {
    char padding[28];
    Texture *value;
};

struct Map;

struct Proxy {
    Map *owner;
};

struct Iterator {
    Proxy *proxy;
    Node *node;

    Iterator();
    Iterator(Proxy *, Node *);
    Iterator(const Iterator &);
};

struct Slot {
    void assign(Texture *);
};

struct Map {
    Proxy *proxy;
    char padding[20];
    Node *end;

    Iterator find(const Key &);
    Iterator finish();
    Slot *lookup(const Key &);
};

struct Mutex {
    char storage[12];
    void lock();
    void unlock();
};

struct State {
    char padding[16];
    Mutex mutex;
    Map map;
};

struct Guard {
    Mutex *mutex;
    bool locked;

    Guard(Mutex *);
    ~Guard();
};

extern State *state;
extern int initialization;
extern "C" void __cdecl initialize();
extern "C" void __cdecl ensure_initialized(void (__cdecl *)(), int *);
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

Iterator::Iterator()
{
}

Iterator::Iterator(Proxy *p, Node *n)
    : proxy(p), node(n)
{
}

Iterator::Iterator(const Iterator &other)
    : proxy(other.proxy), node(other.node)
{
}

Iterator Map::finish()
{
    return Iterator(proxy, end);
}

Guard::Guard(Mutex *p)
    : mutex(p)
{
    mutex->lock();
    locked = true;
}

Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

Texture *__cdecl getTexture(const Vector *vector, int value)
{
    ensure_initialized(initialize, &initialization);
    State *s = state;
    Guard guard(&s->mutex);

    Key key;
    key.x = vector->x;
    key.y = vector->y;
    key.z = vector->z;
    key.value = value;

    Map *map = &s->map;
    Iterator it = map->find(key);
    Iterator end = map->finish();
    Proxy *p = it.proxy;

    if (!p || p != end.proxy)
        _invalid_parameter_noinfo();

    if (it.node == end.node) {
        Texture *texture = new Texture(vector, value);
        Slot *slot = map->lookup(key);
        slot->assign(texture);
        return texture;
    }

    Map *owner = reinterpret_cast<Map *>(p);
    if (!p)
        _invalid_parameter_noinfo();
    else
        owner = p->owner;

    if (it.node == owner->end)
        _invalid_parameter_noinfo();

    return it.node->value;
}
