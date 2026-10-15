// from server: 99% by colin
// roc 2008-06 004ee3b0  unit: RBX::ViewNew::Texture  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ee3b0
//
// 004ee3b0  6aff                 push -1
// 004ee3b2  68a3ab7c00           push 0x7caba3
// 004ee3b7  64a100000000         mov eax, dword ptr fs:[0]
// 004ee3bd  50                   push eax
// 004ee3be  64892500000000       mov dword ptr fs:[0], esp
// 004ee3c5  83ec30               sub esp, 0x30
// 004ee3c8  53                   push ebx
// 004ee3c9  55                   push ebp
// 004ee3ca  56                   push esi
// 004ee3cb  57                   push edi
// 004ee3cc  6850279700           push 0x972750
// 004ee3d1  6830994d00           push 0x4d9930
// 004ee3d6  e8558f0600           call 0x557330
// 004ee3db  8b3538279700         mov esi, dword ptr [0x972738]
// 004ee3e1  8d5e10               lea ebx, [esi + 0x10]
// 004ee3e4  83c408               add esp, 8
// 004ee3e7  8bcb                 mov ecx, ebx
// 004ee3e9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ee3ed  e89e4c0700           call 0x563090
// 004ee3f2  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ee3f7  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004ee3fb  d907                 fld dword ptr [edi]
// 004ee3fd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004ee401  8b442454             mov eax, dword ptr [esp + 0x54]
// 004ee405  d95c2428             fstp dword ptr [esp + 0x28]
// 004ee409  d94704               fld dword ptr [edi + 4]
// 004ee40c  8d4c2428             lea ecx, [esp + 0x28]
// 004ee410  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ee414  51                   push ecx
// 004ee415  d94708               fld dword ptr [edi + 8]
// 004ee418  8d542414             lea edx, [esp + 0x14]
// 004ee41c  d95c2434             fstp dword ptr [esp + 0x34]
// 004ee420  83c63c               add esi, 0x3c
// 004ee423  d94500               fld dword ptr [ebp]
// 004ee426  52                   push edx
// 004ee427  d95c2440             fstp dword ptr [esp + 0x40]
// 004ee42b  8bce                 mov ecx, esi
// 004ee42d  d94504               fld dword ptr [ebp + 4]
// 004ee430  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004ee438  d95c2444             fstp dword ptr [esp + 0x44]
// 004ee43c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004ee440  e8dba2ffff           call 0x4e8720
// 004ee445  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ee448  8b0e                 mov ecx, dword ptr [esi]
// 004ee44a  89442424             mov dword ptr [esp + 0x24], eax
// 004ee44e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee452  85c0                 test eax, eax
// 004ee454  7404                 je 0x4ee45a
// 004ee456  3bc1                 cmp eax, ecx
// 004ee458  740a                 je 0x4ee464
// 004ee45a  ff1590288000         call dword ptr [0x802890]
// 004ee460  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ee464  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee468  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 004ee46c  756b                 jne 0x4ee4d9
// 004ee46e  688c000000           push 0x8c
// 004ee473  e8a8241b00           call 0x6a0920
// 004ee478  83c404               add esp, 4
// 004ee47b  89442410             mov dword ptr [esp + 0x10], eax
// 004ee47f  c644244801           mov byte ptr [esp + 0x48], 1
// 004ee484  85c0                 test eax, eax
// 004ee486  7412                 je 0x4ee49a
// 004ee488  8b542454             mov edx, dword ptr [esp + 0x54]
// 004ee48c  55                   push ebp
// 004ee48d  52                   push edx
// 004ee48e  57                   push edi
// 004ee48f  8bc8                 mov ecx, eax
// 004ee491  e89a950000           call 0x4f7a30
// 004ee496  8bf8                 mov edi, eax
// 004ee498  eb02                 jmp 0x4ee49c
// 004ee49a  33ff                 xor edi, edi
// 004ee49c  8d442428             lea eax, [esp + 0x28]
// 004ee4a0  50                   push eax
// 004ee4a1  8bce                 mov ecx, esi
// 004ee4a3  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004ee4a8  e853bbffff           call 0x4ea000
// 004ee4ad  57                   push edi
// 004ee4ae  8bc8                 mov ecx, eax
// 004ee4b0  e8ebaa0a00           call 0x598fa0
// 004ee4b5  8bcb                 mov ecx, ebx
// 004ee4b7  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004ee4bf  e81c4c0700           call 0x5630e0
// 004ee4c4  8bc7                 mov eax, edi
// 004ee4c6  5f                   pop edi
// 004ee4c7  5e                   pop esi
// 004ee4c8  5d                   pop ebp
// 004ee4c9  5b                   pop ebx
// 004ee4ca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ee4ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee4d5  83c43c               add esp, 0x3c
// 004ee4d8  c3                   ret 
// 004ee4d9  85c0                 test eax, eax
// 004ee4db  7542                 jne 0x4ee51f
// 004ee4dd  ff1590288000         call dword ptr [0x802890]
// 004ee4e3  33c0                 xor eax, eax
// 004ee4e5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee4e9  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 004ee4ec  7506                 jne 0x4ee4f4
// 004ee4ee  ff1590288000         call dword ptr [0x802890]
// 004ee4f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ee4f8  8b7224               mov esi, dword ptr [edx + 0x24]
// 004ee4fb  8bcb                 mov ecx, ebx
// 004ee4fd  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004ee505  e8d64b0700           call 0x5630e0
// 004ee50a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ee50e  5f                   pop edi
// 004ee50f  8bc6                 mov eax, esi
// 004ee511  5e                   pop esi
// 004ee512  5d                   pop ebp
// 004ee513  5b                   pop ebx
// 004ee514  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee51b  83c43c               add esp, 0x3c
// 004ee51e  c3                   ret 
// 004ee51f  8b00                 mov eax, dword ptr [eax]
// 004ee521  ebc2                 jmp 0x4ee4e5

typedef unsigned int size_t;

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(size_t);
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
    char storage[0x8c];
    Texture(const Vector3&, int, const Vector2&);
};

struct Mutex {
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(&m), locked(false) {
    mutex->lock();
    locked = true;
}

inline Lock::~Lock() {
    if (locked)
        mutex->unlock();
}

struct Map;

struct Proxy {
    Map* owner;
};

struct Node {
    char padding[0x24];
    Texture* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    bool operator==(const Iterator&) const;
    Node& operator*() const;
};

struct Slot {
    void assign(Texture*);
};

struct Map {
    Proxy* proxy;
    char padding[0x14];
    Node* sentinel;
    Iterator find(const Key&);
    Slot* insert(const Key&);
};

inline bool Iterator::operator==(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Node& Iterator::operator*() const {
    Map* owner;
    if (!proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = proxy->owner;
    }
    if (node == owner->sentinel)
        _invalid_parameter_noinfo();
    return *node;
}

struct State {
    char padding0[0x10];
    Mutex mutex;
    char padding1[0x2b];
    Map map;
};

extern State* state;
extern int initializationToken;
void __cdecl initializeState();
void __cdecl ensureInitialized(void (__cdecl*)(), int*);

Texture* __cdecl getTexture(const Vector3& position, int kind,
                           const Vector2& size) {
    ensureInitialized(initializeState, &initializationToken);

    State* current = state;
    Lock lock(current->mutex);

    Key key;
    key.position.x = position.x;
    key.position.y = position.y;
    key.position.z = position.z;
    key.kind = kind;
    key.size.x = size.x;
    key.size.y = size.y;

    Map* map = &current->map;
    Iterator found = map->find(key);
    Iterator end;
    end.proxy = map->proxy;
    end.node = map->sentinel;

    if (found == end) {
        Texture* result = new Texture(position, kind, size);
        Slot* slot = map->insert(key);
        slot->assign(result);
        return result;
    }

    Proxy* owner = found.proxy;
    if (!owner)
        _invalid_parameter_noinfo();

    Map* container = owner ? owner->owner : 0;
    if (found.node == container->sentinel)
        _invalid_parameter_noinfo();

    return found.node->value;
}
