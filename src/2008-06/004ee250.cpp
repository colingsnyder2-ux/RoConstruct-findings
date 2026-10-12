// from server: 88% by king_originala
extern "C" void (__cdecl *invalidParameter)();

struct Vec3 {
    float x, y, z;
};

struct Key {
    float x, y, z;
    int kind;
};

struct Texture {
    char storage[0x8c];
    Texture(const Vec3 *, int);
};

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Mutex {
    char storage[12];
    void lock();
    void unlock();
};

struct Slot {
    void assign(Texture *);
};

struct Node {
    char padding[0x1c];
    Texture *value;
};

struct Map;

struct Iterator {
    Map **owner;
    Node *node;
};

struct Map {
    Map **owner;
    char padding[0x14];
    Node *endNode;

    Iterator *find(Iterator *, const Key *);
    Slot *index(const Key *);
};

struct Context {
    char padding[0x10];
    Mutex mutex;
    Map map;
};

extern Context *context;
extern int initializationFlag;
extern void __cdecl initialize();
extern void __cdecl initializeOnce(void (__cdecl *)(), int *);

struct Lock {
    Mutex *mutex;
    bool locked;

    Lock(Mutex *);
    ~Lock();
};

__forceinline Lock::Lock(Mutex *m) : mutex(m), locked(false)
{
    mutex->lock();
    locked = true;
}

__forceinline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

Texture *__cdecl f(const Vec3 *position, int kind)
{
    initializeOnce(initialize, &initializationFlag);
    Context *c = context;
    Lock lock(&c->mutex);

    Key key;
    key.x = position->x;
    key.y = position->y;
    key.z = position->z;
    key.kind = kind;

    Iterator it;
    Map *map = &c->map;
    map->find(&it, &key);

    Iterator end;
    end.node = map->endNode;
    end.owner = map->owner;

    Map **owner = it.owner;
    if (!owner || owner != end.owner)
        invalidParameter();

    if (it.node == end.node) {
        Texture *texture = new Texture(position, kind);
        Slot *slot = map->index(&key);
        slot->assign(texture);
        return texture;
    }

    if (!owner)
        invalidParameter();
    else
        owner = reinterpret_cast<Map **>(*owner);

    if (it.node == reinterpret_cast<Map *>(owner)->endNode)
        invalidParameter();

    return it.node->value;
}
