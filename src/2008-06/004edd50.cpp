// from server: 88% by king_originala
typedef unsigned int size_t;

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern void *__cdecl operator new(size_t);
extern void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
};

struct Key {
    float x, y, z;
    int mode;
};

struct Texture {
    char storage[140];
    Texture(const Vector3 &, int);
};

struct Mutex {
    char storage[12];
    void lock();
    void unlock();
};

struct Lock {
    Mutex *mutex;
    bool owned;
    Lock(Mutex &);
    ~Lock();
};

inline Lock::Lock(Mutex &m) : mutex(&m), owned(false)
{
    mutex->lock();
    owned = true;
}

inline Lock::~Lock()
{
    if (owned)
        mutex->unlock();
}

struct Map;

struct Proxy {
    Map *container;
};

struct Node {
    char storage[28];
    Texture *texture;
};

struct Iterator {
    Proxy *proxy;
    Node *node;
};

struct Value {
    void assign(Texture *);
};

struct Map {
    Proxy *proxy;
    char storage[20];
    Node *endNode;
    Iterator find(const Key &);
    Iterator end();
    Value &operator[](const Key &);
};

inline Iterator Map::end()
{
    Iterator result;
    result.proxy = proxy;
    result.node = endNode;
    return result;
}

struct State {
    char storage[16];
    Mutex mutex;
    Map map;
};

extern State *state;
extern int initializationFlag;
extern void __cdecl initializeState();
extern void __cdecl initializeOnce(void (__cdecl *)(), int *);

Texture *__cdecl f(const Vector3 &position, int mode)
{
    initializeOnce(initializeState, &initializationFlag);

    State *s = state;
    Lock lock(s->mutex);

    Key key;
    key.x = position.x;
    key.y = position.y;
    key.z = position.z;
    key.mode = mode;

    Map *map = &s->map;
    Iterator found = map->find(key);
    Iterator last = map->end();
    Proxy *proxy = found.proxy;

    if (!proxy || proxy != last.proxy)
        _invalid_parameter_noinfo();

    if (found.node == last.node) {
        Texture *texture = new Texture(position, mode);
        Value &value = (*map)[key];
        value.assign(texture);
        return texture;
    }

    Map *owner = reinterpret_cast<Map *>(proxy);
    if (!proxy)
        _invalid_parameter_noinfo();
    else
        owner = proxy->container;

    if (found.node == owner->endNode)
        _invalid_parameter_noinfo();

    return found.node->texture;
}
