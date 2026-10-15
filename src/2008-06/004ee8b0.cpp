// from server: 99% by colin
// roc 2008-06 004ee8b0  unit: RBX::ViewNew::Texture  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ee8b0
//
// 004ee8b0  6aff                 push -1
// 004ee8b2  68a3ab7c00           push 0x7caba3
// 004ee8b7  64a100000000         mov eax, dword ptr fs:[0]
// 004ee8bd  50                   push eax
// 004ee8be  64892500000000       mov dword ptr fs:[0], esp
// 004ee8c5  83ec30               sub esp, 0x30
// 004ee8c8  53                   push ebx
// 004ee8c9  55                   push ebp
// 004ee8ca  56                   push esi
// 004ee8cb  57                   push edi
// 004ee8cc  6848279700           push 0x972748
// 004ee8d1  6870984d00           push 0x4d9870
// 004ee8d6  e8558a0600           call 0x557330
// 004ee8db  8b3530279700         mov esi, dword ptr [0x972730]
// 004ee8e1  8d5e10               lea ebx, [esi + 0x10]
// 004ee8e4  83c408               add esp, 8
// 004ee8e7  8bcb                 mov ecx, ebx
// 004ee8e9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ee8ed  e89e470700           call 0x563090
// 004ee8f2  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ee8f7  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004ee8fb  d907                 fld dword ptr [edi]
// 004ee8fd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004ee901  8b442454             mov eax, dword ptr [esp + 0x54]
// 004ee905  d95c2428             fstp dword ptr [esp + 0x28]
// 004ee909  d94704               fld dword ptr [edi + 4]
// 004ee90c  8d4c2428             lea ecx, [esp + 0x28]
// 004ee910  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ee914  51                   push ecx
// 004ee915  d94708               fld dword ptr [edi + 8]
// 004ee918  8d542414             lea edx, [esp + 0x14]
// 004ee91c  d95c2434             fstp dword ptr [esp + 0x34]
// 004ee920  83c63c               add esi, 0x3c
// 004ee923  d94500               fld dword ptr [ebp]
// 004ee926  52                   push edx
// 004ee927  d95c2440             fstp dword ptr [esp + 0x40]
// 004ee92b  8bce                 mov ecx, esi
// 004ee92d  d94504               fld dword ptr [ebp + 4]
// 004ee930  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004ee938  d95c2444             fstp dword ptr [esp + 0x44]
// 004ee93c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004ee940  e8db9dffff           call 0x4e8720
// 004ee945  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ee948  8b0e                 mov ecx, dword ptr [esi]
// 004ee94a  89442424             mov dword ptr [esp + 0x24], eax
// 004ee94e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee952  85c0                 test eax, eax
// 004ee954  7404                 je 0x4ee95a
// 004ee956  3bc1                 cmp eax, ecx
// 004ee958  740a                 je 0x4ee964
// 004ee95a  ff1590288000         call dword ptr [0x802890]
// 004ee960  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee964  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee968  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 004ee96c  756b                 jne 0x4ee9d9
// 004ee96e  688c000000           push 0x8c
// 004ee973  e8a81f1b00           call 0x6a0920
// 004ee978  83c404               add esp, 4
// 004ee97b  89442410             mov dword ptr [esp + 0x10], eax
// 004ee97f  c644244801           mov byte ptr [esp + 0x48], 1
// 004ee984  85c0                 test eax, eax
// 004ee986  7412                 je 0x4ee99a
// 004ee988  8b542454             mov edx, dword ptr [esp + 0x54]
// 004ee98c  55                   push ebp
// 004ee98d  52                   push edx
// 004ee98e  57                   push edi
// 004ee98f  8bc8                 mov ecx, eax
// 004ee991  e8eabe0000           call 0x4fa880
// 004ee996  8bf8                 mov edi, eax
// 004ee998  eb02                 jmp 0x4ee99c
// 004ee99a  33ff                 xor edi, edi
// 004ee99c  8d442428             lea eax, [esp + 0x28]
// 004ee9a0  50                   push eax
// 004ee9a1  8bce                 mov ecx, esi
// 004ee9a3  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004ee9a8  e853b6ffff           call 0x4ea000
// 004ee9ad  57                   push edi
// 004ee9ae  8bc8                 mov ecx, eax
// 004ee9b0  e8eba50a00           call 0x598fa0
// 004ee9b5  8bcb                 mov ecx, ebx
// 004ee9b7  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004ee9bf  e81c470700           call 0x5630e0
// 004ee9c4  8bc7                 mov eax, edi
// 004ee9c6  5f                   pop edi
// 004ee9c7  5e                   pop esi
// 004ee9c8  5d                   pop ebp
// 004ee9c9  5b                   pop ebx
// 004ee9ca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ee9ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee9d5  83c43c               add esp, 0x3c
// 004ee9d8  c3                   ret 
// 004ee9d9  85c0                 test eax, eax
// 004ee9db  7542                 jne 0x4eea1f
// 004ee9dd  ff1590288000         call dword ptr [0x802890]
// 004ee9e3  33c0                 xor eax, eax
// 004ee9e5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee9e9  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 004ee9ec  7506                 jne 0x4ee9f4
// 004ee9ee  ff1590288000         call dword ptr [0x802890]
// 004ee9f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ee9f8  8b7224               mov esi, dword ptr [edx + 0x24]
// 004ee9fb  8bcb                 mov ecx, ebx
// 004ee9fd  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004eea05  e8d6460700           call 0x5630e0
// 004eea0a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004eea0e  5f                   pop edi
// 004eea0f  8bc6                 mov eax, esi
// 004eea11  5e                   pop esi
// 004eea12  5d                   pop ebp
// 004eea13  5b                   pop ebx
// 004eea14  64890d00000000       mov dword ptr fs:[0], ecx
// 004eea1b  83c43c               add esp, 0x3c
// 004eea1e  c3                   ret 
// 004eea1f  8b00                 mov eax, dword ptr [eax]
// 004eea21  ebc2                 jmp 0x4ee9e5

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

    Proxy *owner = it.owner;
    if (!owner)
        _invalid_parameter_noinfo();

    Map *container = owner ? owner->container : 0;
    if (it.node == container->end_node)
        _invalid_parameter_noinfo();

    return it.node->texture;
}
