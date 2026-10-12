// from server: 80% by king_originala
// roc 2008-06 004ee750  unit: RBX::ViewNew::Texture  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ee750
//
// 004ee750  6aff                 push -1
// 004ee752  6803ac7c00           push 0x7cac03
// 004ee757  64a100000000         mov eax, dword ptr fs:[0]
// 004ee75d  50                   push eax
// 004ee75e  64892500000000       mov dword ptr fs:[0], esp
// 004ee765  83ec28               sub esp, 0x28
// 004ee768  53                   push ebx
// 004ee769  55                   push ebp
// 004ee76a  56                   push esi
// 004ee76b  57                   push edi
// 004ee76c  6848279700           push 0x972748
// 004ee771  6870984d00           push 0x4d9870
// 004ee776  e8b58b0600           call 0x557330
// 004ee77b  8b3530279700         mov esi, dword ptr [0x972730]
// 004ee781  8d6e10               lea ebp, [esi + 0x10]
// 004ee784  83c408               add esp, 8
// 004ee787  8bcd                 mov ecx, ebp
// 004ee789  896c2418             mov dword ptr [esp + 0x18], ebp
// 004ee78d  e8fe480700           call 0x563090
// 004ee792  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ee797  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004ee79b  d907                 fld dword ptr [edi]
// 004ee79d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004ee7a1  d95c2428             fstp dword ptr [esp + 0x28]
// 004ee7a5  8d4c2428             lea ecx, [esp + 0x28]
// 004ee7a9  d94704               fld dword ptr [edi + 4]
// 004ee7ac  51                   push ecx
// 004ee7ad  d95c2430             fstp dword ptr [esp + 0x30]
// 004ee7b1  8d542414             lea edx, [esp + 0x14]
// 004ee7b5  d94708               fld dword ptr [edi + 8]
// 004ee7b8  83c61c               add esi, 0x1c
// 004ee7bb  52                   push edx
// 004ee7bc  d95c2438             fstp dword ptr [esp + 0x38]
// 004ee7c0  8bce                 mov ecx, esi
// 004ee7c2  c744244800000000     mov dword ptr [esp + 0x48], 0
// 004ee7ca  8944243c             mov dword ptr [esp + 0x3c], eax
// 004ee7ce  e8bd9effff           call 0x4e8690
// 004ee7d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ee7d6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004ee7da  89442424             mov dword ptr [esp + 0x24], eax
// 004ee7de  8b06                 mov eax, dword ptr [esi]
// 004ee7e0  85db                 test ebx, ebx
// 004ee7e2  7404                 je 0x4ee7e8
// 004ee7e4  3bd8                 cmp ebx, eax
// 004ee7e6  7406                 je 0x4ee7ee
// 004ee7e8  ff1590288000         call dword ptr [0x802890]
// 004ee7ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee7f2  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 004ee7f6  756a                 jne 0x4ee862
// 004ee7f8  688c000000           push 0x8c
// 004ee7fd  e81e211b00           call 0x6a0920
// 004ee802  83c404               add esp, 4
// 004ee805  89442410             mov dword ptr [esp + 0x10], eax
// 004ee809  c644244001           mov byte ptr [esp + 0x40], 1
// 004ee80e  85c0                 test eax, eax
// 004ee810  7411                 je 0x4ee823
// 004ee812  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004ee816  52                   push edx
// 004ee817  57                   push edi
// 004ee818  8bc8                 mov ecx, eax
// 004ee81a  e8e1be0000           call 0x4fa700
// 004ee81f  8bf8                 mov edi, eax
// 004ee821  eb02                 jmp 0x4ee825
// 004ee823  33ff                 xor edi, edi
// 004ee825  8d442428             lea eax, [esp + 0x28]
// 004ee829  50                   push eax
// 004ee82a  8bce                 mov ecx, esi
// 004ee82c  c644244400           mov byte ptr [esp + 0x44], 0
// 004ee831  e80ab9ffff           call 0x4ea140
// 004ee836  57                   push edi
// 004ee837  8bc8                 mov ecx, eax
// 004ee839  e862a70a00           call 0x598fa0
// 004ee83e  8bcd                 mov ecx, ebp
// 004ee840  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004ee848  e893480700           call 0x5630e0
// 004ee84d  8bc7                 mov eax, edi
// 004ee84f  5f                   pop edi
// 004ee850  5e                   pop esi
// 004ee851  5d                   pop ebp
// 004ee852  5b                   pop ebx
// 004ee853  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ee857  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee85e  83c434               add esp, 0x34
// 004ee861  c3                   ret 
// 004ee862  85db                 test ebx, ebx
// 004ee864  7540                 jne 0x4ee8a6
// 004ee866  ff1590288000         call dword ptr [0x802890]
// 004ee86c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee870  3b4b18               cmp ecx, dword ptr [ebx + 0x18]
// 004ee873  7506                 jne 0x4ee87b
// 004ee875  ff1590288000         call dword ptr [0x802890]
// 004ee87b  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ee87f  8b721c               mov esi, dword ptr [edx + 0x1c]
// 004ee882  8bcd                 mov ecx, ebp
// 004ee884  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004ee88c  e84f480700           call 0x5630e0
// 004ee891  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ee895  5f                   pop edi
// 004ee896  8bc6                 mov eax, esi
// 004ee898  5e                   pop esi
// 004ee899  5d                   pop ebp
// 004ee89a  5b                   pop ebx
// 004ee89b  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee8a2  83c434               add esp, 0x34
// 004ee8a5  c3                   ret 
// 004ee8a6  8b1b                 mov ebx, dword ptr [ebx]
// 004ee8a8  ebc2                 jmp 0x4ee86c

struct Vector3 {
    float x, y, z;
};

struct Key {
    Vector3 position;
    int kind;
};

struct Texture {
    unsigned char storage[140];
    Texture(const Vector3&, int);
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void (__cdecl* invalid_parameter_noinfo)();

struct Map;

struct Proxy {
    Map* owner;
};

struct Node {
    unsigned char padding[28];
    Texture* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;

    bool operator==(const Iterator&) const;
    Texture* value() const;
};

struct Slot {
    void assign(Texture*);
};

struct Map {
    Proxy* proxy;
    unsigned char padding[20];
    Node* head;

    Iterator find(const Key&);
    Slot& operator[](const Key&);
    Iterator end();
};

inline Iterator Map::end() {
    Iterator result;
    result.proxy = proxy;
    result.node = head;
    return result;
}

inline bool Iterator::operator==(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return node == other.node;
}

inline Texture* Iterator::value() const {
    if (!proxy)
        invalid_parameter_noinfo();
    if (node == proxy->owner->head)
        invalid_parameter_noinfo();
    return node->value;
}

struct Mutex {
    unsigned char storage[12];
    void lock();
    void unlock();
};

struct State {
    unsigned char padding[16];
    Mutex mutex;
    Map map;
};

extern State* state;
extern unsigned char initialization;
extern void __cdecl initialize();
extern void __cdecl ensure_initialized(void (__cdecl*)(), void*);

struct Guard {
    Mutex* mutex;
    bool locked;

    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    if (locked)
        mutex->unlock();
}

Texture* __cdecl getTexture(const Vector3* position, int kind) {
    ensure_initialized(initialize, &initialization);
    State* s = state;
    Guard guard(&s->mutex);

    Key key;
    key.position.x = position->x;
    key.position.y = position->y;
    key.position.z = position->z;
    key.kind = kind;

    Map* map = &s->map;
    Iterator it = map->find(key);
    Iterator end = map->end();

    if (it == end) {
        Texture* texture = new Texture(*position, kind);
        Slot& slot = (*map)[key];
        slot.assign(texture);
        return texture;
    }

    return it.value();
}
