// from server: 80% by king_originala
typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Vector {
    float x, y, z;
};

struct Key {
    float x, y, z;
    int kind;
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
    bool operator==(const Iterator &) const;
    Texture *get() const;
};

struct Slot {
    void assign(Texture *);
};

struct Map {
    Proxy *proxy;
    char padding[20];
    Node *head;

    Iterator find(const Key &);
    Iterator end();
    Slot *insert(const Key &);
};

inline Iterator::Iterator()
{
}

inline Iterator::Iterator(Proxy *p, Node *n) : proxy(p), node(n)
{
}

inline Iterator Map::end()
{
    return Iterator(proxy, head);
}

inline bool Iterator::operator==(const Iterator &other) const
{
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Texture *Iterator::get() const
{
    Map *owner;
    if (!proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = proxy->owner;
    }
    if (node == owner->head)
        _invalid_parameter_noinfo();
    return node->value;
}

struct Lock {
    char storage[12];
    void acquire();
    void release();
};

struct State {
    char padding[16];
    Lock lock;
    Map map;
};

extern State *state;
extern int initializationFlag;
void __cdecl initializeState();
void __cdecl initialize(void (__cdecl *)(), int *);

struct Guard {
    Lock *lock;
    bool held;
    Guard(Lock *);
    ~Guard();
};

inline Guard::Guard(Lock *p) : lock(p)
{
    lock->acquire();
    held = true;
}

inline Guard::~Guard()
{
    if (held)
        lock->release();
}

Texture * __cdecl getTexture(const Vector *v, int kind)
{
    initialize(initializeState, &initializationFlag);
    State *s = state;
    Guard guard(&s->lock);

    Key key;
    key.x = v->x;
    key.y = v->y;
    key.z = v->z;
    key.kind = kind;

    Map *map = &s->map;
    Iterator it = map->find(key);
    Iterator end = map->end();

    if (it == end) {
        Texture *result = new Texture(v, kind);
        Slot *slot = map->insert(key);
        slot->assign(result);
        return result;
    }

    return it.get();
}
