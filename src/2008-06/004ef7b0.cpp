// from server: 99% by king_originala
extern "C" void (__cdecl* const invalid_parameter_noinfo)();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3
{
    float x, y, z;
};

struct Vector2
{
    float x, y;
};

struct Key
{
    float x, y, z;
    int value;
    float u, v;
};

struct Texture
{
    char storage[140];
    Texture(const Vector3&, int, const Vector2&);
};

struct Node
{
    char padding[36];
    Texture* value;
};

struct Map;

struct Proxy
{
    Map* container;
};

struct Iterator
{
    Proxy* owner;
    Node* node;
};

struct Slot
{
    void assign(Texture*);
};

struct Map
{
    Proxy* proxy;
    char padding[20];
    Node* head;

    Iterator find(const Key&);
    Slot* subscript(const Key&);
};

struct Mutex
{
    void lock();
    void unlock();
};

struct State
{
    char padding[16];
    Mutex mutex;
    char reserved[43];
    Map map;
};

extern State* state;
extern int initialization;
extern void __cdecl initialize_state();
extern void __cdecl initialize(void (__cdecl*)(), void*);

struct Guard
{
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

Texture* __cdecl getTexture(const Vector3& position, int value,
                            const Vector2& coordinates)
{
    initialize(initialize_state, &initialization);

    State* s = state;
    Guard guard(&s->mutex);

    Key key;
    key.x = position.x;
    key.y = position.y;
    key.z = position.z;
    key.u = coordinates.x;
    key.v = coordinates.y;
    key.value = value;

    Map* map = &s->map;
    Iterator found = map->find(key);
    Iterator end;
    end.node = map->head;
    end.owner = map->proxy;

    if (!found.owner || found.owner != end.owner)
        invalid_parameter_noinfo();

    if (found.node == end.node)
    {
        Texture* texture = new Texture(position, value, coordinates);
        Slot* slot = map->subscript(key);
        slot->assign(texture);
        return texture;
    }

    Proxy* owner = found.owner;
    if (!owner)
        invalid_parameter_noinfo();

    Map* container = owner ? owner->container : 0;
    if (found.node == container->head)
        invalid_parameter_noinfo();

    return found.node->value;
}
