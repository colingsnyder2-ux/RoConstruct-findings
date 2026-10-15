// from server: 99% by colin
// roc 2008-06 004edeb0  unit: RBX::ViewNew::Texture  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004edeb0
//
// 004edeb0  6aff                 push -1
// 004edeb2  68a3ab7c00           push 0x7caba3
// 004edeb7  64a100000000         mov eax, dword ptr fs:[0]
// 004edebd  50                   push eax
// 004edebe  64892500000000       mov dword ptr fs:[0], esp
// 004edec5  83ec30               sub esp, 0x30
// 004edec8  53                   push ebx
// 004edec9  55                   push ebp
// 004edeca  56                   push esi
// 004edecb  57                   push edi
// 004edecc  683c279700           push 0x97273c
// 004eded1  6850974d00           push 0x4d9750
// 004eded6  e855940600           call 0x557330
// 004ededb  8b3524279700         mov esi, dword ptr [0x972724]
// 004edee1  8d5e10               lea ebx, [esi + 0x10]
// 004edee4  83c408               add esp, 8
// 004edee7  8bcb                 mov ecx, ebx
// 004edee9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004edeed  e89e510700           call 0x563090
// 004edef2  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004edef7  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004edefb  d907                 fld dword ptr [edi]
// 004edefd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004edf01  8b442454             mov eax, dword ptr [esp + 0x54]
// 004edf05  d95c2428             fstp dword ptr [esp + 0x28]
// 004edf09  d94704               fld dword ptr [edi + 4]
// 004edf0c  8d4c2428             lea ecx, [esp + 0x28]
// 004edf10  d95c242c             fstp dword ptr [esp + 0x2c]
// 004edf14  51                   push ecx
// 004edf15  d94708               fld dword ptr [edi + 8]
// 004edf18  8d542414             lea edx, [esp + 0x14]
// 004edf1c  d95c2434             fstp dword ptr [esp + 0x34]
// 004edf20  83c63c               add esi, 0x3c
// 004edf23  d94500               fld dword ptr [ebp]
// 004edf26  52                   push edx
// 004edf27  d95c2440             fstp dword ptr [esp + 0x40]
// 004edf2b  8bce                 mov ecx, esi
// 004edf2d  d94504               fld dword ptr [ebp + 4]
// 004edf30  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004edf38  d95c2444             fstp dword ptr [esp + 0x44]
// 004edf3c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004edf40  e8dba7ffff           call 0x4e8720
// 004edf45  8b4618               mov eax, dword ptr [esi + 0x18]
// 004edf48  8b0e                 mov ecx, dword ptr [esi]
// 004edf4a  89442424             mov dword ptr [esp + 0x24], eax
// 004edf4e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004edf52  85c0                 test eax, eax
// 004edf54  7404                 je 0x4edf5a
// 004edf56  3bc1                 cmp eax, ecx
// 004edf58  740a                 je 0x4edf64
// 004edf5a  ff1590288000         call dword ptr [0x802890]
// 004edf60  8b442410             mov eax, dword ptr [esp + 0x10]
// 004edf64  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004edf68  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 004edf6c  756b                 jne 0x4edfd9
// 004edf6e  688c000000           push 0x8c
// 004edf73  e8a8291b00           call 0x6a0920
// 004edf78  83c404               add esp, 4
// 004edf7b  89442410             mov dword ptr [esp + 0x10], eax
// 004edf7f  c644244801           mov byte ptr [esp + 0x48], 1
// 004edf84  85c0                 test eax, eax
// 004edf86  7412                 je 0x4edf9a
// 004edf88  8b542454             mov edx, dword ptr [esp + 0x54]
// 004edf8c  55                   push ebp
// 004edf8d  52                   push edx
// 004edf8e  57                   push edi
// 004edf8f  8bc8                 mov ecx, eax
// 004edf91  e88a6b0000           call 0x4f4b20
// 004edf96  8bf8                 mov edi, eax
// 004edf98  eb02                 jmp 0x4edf9c
// 004edf9a  33ff                 xor edi, edi
// 004edf9c  8d442428             lea eax, [esp + 0x28]
// 004edfa0  50                   push eax
// 004edfa1  8bce                 mov ecx, esi
// 004edfa3  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004edfa8  e853c0ffff           call 0x4ea000
// 004edfad  57                   push edi
// 004edfae  8bc8                 mov ecx, eax
// 004edfb0  e8ebaf0a00           call 0x598fa0
// 004edfb5  8bcb                 mov ecx, ebx
// 004edfb7  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004edfbf  e81c510700           call 0x5630e0
// 004edfc4  8bc7                 mov eax, edi
// 004edfc6  5f                   pop edi
// 004edfc7  5e                   pop esi
// 004edfc8  5d                   pop ebp
// 004edfc9  5b                   pop ebx
// 004edfca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004edfce  64890d00000000       mov dword ptr fs:[0], ecx
// 004edfd5  83c43c               add esp, 0x3c
// 004edfd8  c3                   ret 
// 004edfd9  85c0                 test eax, eax
// 004edfdb  7542                 jne 0x4ee01f
// 004edfdd  ff1590288000         call dword ptr [0x802890]
// 004edfe3  33c0                 xor eax, eax
// 004edfe5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004edfe9  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 004edfec  7506                 jne 0x4edff4
// 004edfee  ff1590288000         call dword ptr [0x802890]
// 004edff4  8b542414             mov edx, dword ptr [esp + 0x14]
// 004edff8  8b7224               mov esi, dword ptr [edx + 0x24]
// 004edffb  8bcb                 mov ecx, ebx
// 004edffd  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004ee005  e8d6500700           call 0x5630e0
// 004ee00a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ee00e  5f                   pop edi
// 004ee00f  8bc6                 mov eax, esi
// 004ee011  5e                   pop esi
// 004ee012  5d                   pop ebp
// 004ee013  5b                   pop ebx
// 004ee014  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee01b  83c43c               add esp, 0x3c
// 004ee01e  c3                   ret 
// 004ee01f  8b00                 mov eax, dword ptr [eax]
// 004ee021  ebc2                 jmp 0x4edfe5

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

inline Guard::Guard(Mutex* p) : mutex(p) {
    mutex->lock();
    active = true;
}

inline Guard::~Guard() {
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
