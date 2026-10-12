// from server: 96% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };

struct Texture {
    char data[140];
    Texture(const Vec3*, int, const Vec2*);
};

struct Mutex {
    char data[44];
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool held;
    Lock(Mutex*);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p), held(false) {
    mutex->lock();
    held = true;
}

inline Lock::~Lock() {
    if (held)
        mutex->unlock();
}

struct Key {
    float x, y, z;
    int value;
    float u, v;
};

struct Node {
    char data[36];
    Texture* texture;
};

struct Tree;
struct Proxy { Tree* tree; };

struct Iterator {
    Proxy* proxy;
    Node* node;
    bool equal(const Iterator&) const;
    Texture* get() const;
};

inline bool Iterator::equal(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return node == other.node;
}

struct Slot {
    void assign(Texture*);
};

struct Tree {
    Proxy* proxy;
    char padding[20];
    Node* sentinel;
    void find(Iterator*, const Key*);
    Slot* index(const Key*);
};

inline Texture* Iterator::get() const {
    Tree* tree;
    if (!proxy) {
        _invalid_parameter_noinfo();
        tree = 0;
    } else {
        tree = proxy->tree;
    }
    if (node == tree->sentinel)
        _invalid_parameter_noinfo();
    return node->texture;
}

struct Owner {
    char padding[16];
    Mutex mutex;
    Tree tree;
};

extern Owner* owner;
extern int initialization;
void __cdecl initialize(void (__cdecl*)(), int*);
void __cdecl createOwner();

Texture* __cdecl getTexture(const Vec3* position, int value, const Vec2* size) {
    initialize(createOwner, &initialization);
    Owner* p = owner;
    Mutex& mutex = p->mutex;
    Lock guard(&mutex);

    Key key;
    key.x = position->x;
    key.y = position->y;
    key.z = position->z;
    key.value = value;
    key.u = size->x;
    key.v = size->y;

    Tree& tree = p->tree;
    Iterator found;
    tree.find(&found, &key);
    Iterator end;
    end.proxy = tree.proxy;
    end.node = tree.sentinel;

    if (found.equal(end)) {
        Texture* result = new Texture(position, value, size);
        Slot* slot = tree.index(&key);
        slot->assign(result);
        return result;
    }
    return found.get();
}
