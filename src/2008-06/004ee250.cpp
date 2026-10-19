// from server: 91% by colin
// from server: 90% by colin
// roc 2008-06 004ee250  unit: RBX::ViewNew::Texture  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ee250
//
// 004ee250  6aff                 push -1
// 004ee252  6803ac7c00           push 0x7cac03
// 004ee257  64a100000000         mov eax, dword ptr fs:[0]
// 004ee25d  50                   push eax
// 004ee25e  64892500000000       mov dword ptr fs:[0], esp
// 004ee265  83ec28               sub esp, 0x28
// 004ee268  53                   push ebx
// 004ee269  55                   push ebp
// 004ee26a  56                   push esi
// 004ee26b  57                   push edi
// 004ee26c  6850279700           push 0x972750
// 004ee271  6830994d00           push 0x4d9930
// 004ee276  e8b5900600           call 0x557330
// 004ee27b  8b3538279700         mov esi, dword ptr [0x972738]
// 004ee281  8d6e10               lea ebp, [esi + 0x10]
// 004ee284  83c408               add esp, 8
// 004ee287  8bcd                 mov ecx, ebp
// 004ee289  896c2418             mov dword ptr [esp + 0x18], ebp
// 004ee28d  e8fe4d0700           call 0x563090
// 004ee292  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ee297  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004ee29b  d907                 fld dword ptr [edi]
// 004ee29d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004ee2a1  d95c2428             fstp dword ptr [esp + 0x28]
// 004ee2a5  8d4c2428             lea ecx, [esp + 0x28]
// 004ee2a9  d94704               fld dword ptr [edi + 4]
// 004ee2ac  51                   push ecx
// 004ee2ad  d95c2430             fstp dword ptr [esp + 0x30]
// 004ee2b1  8d542414             lea edx, [esp + 0x14]
// 004ee2b5  d94708               fld dword ptr [edi + 8]
// 004ee2b8  83c61c               add esi, 0x1c
// 004ee2bb  52                   push edx
// 004ee2bc  d95c2438             fstp dword ptr [esp + 0x38]
// 004ee2c0  8bce                 mov ecx, esi
// 004ee2c2  c744244800000000     mov dword ptr [esp + 0x48], 0
// 004ee2ca  8944243c             mov dword ptr [esp + 0x3c], eax
// 004ee2ce  e8bda3ffff           call 0x4e8690
// 004ee2d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004ee2d6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004ee2da  89442424             mov dword ptr [esp + 0x24], eax
// 004ee2de  8b06                 mov eax, dword ptr [esi]
// 004ee2e0  85db                 test ebx, ebx
// 004ee2e2  7404                 je 0x4ee2e8
// 004ee2e4  3bd8                 cmp ebx, eax
// 004ee2e6  7406                 je 0x4ee2ee
// 004ee2e8  ff1590288000         call dword ptr [0x802890]
// 004ee2ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee2f2  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 004ee2f6  756a                 jne 0x4ee362
// 004ee2f8  688c000000           push 0x8c
// 004ee2fd  e81e261b00           call 0x6a0920
// 004ee302  83c404               add esp, 4
// 004ee305  89442410             mov dword ptr [esp + 0x10], eax
// 004ee309  c644244001           mov byte ptr [esp + 0x40], 1
// 004ee30e  85c0                 test eax, eax
// 004ee310  7411                 je 0x4ee323
// 004ee312  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004ee316  52                   push edx
// 004ee317  57                   push edi
// 004ee318  8bc8                 mov ecx, eax
// 004ee31a  e8b1950000           call 0x4f78d0
// 004ee31f  8bf8                 mov edi, eax
// 004ee321  eb02                 jmp 0x4ee325
// 004ee323  33ff                 xor edi, edi
// 004ee325  8d442428             lea eax, [esp + 0x28]
// 004ee329  50                   push eax
// 004ee32a  8bce                 mov ecx, esi
// 004ee32c  c644244400           mov byte ptr [esp + 0x44], 0
// 004ee331  e80abeffff           call 0x4ea140
// 004ee336  57                   push edi
// 004ee337  8bc8                 mov ecx, eax
// 004ee339  e862ac0a00           call 0x598fa0
// 004ee33e  8bcd                 mov ecx, ebp
// 004ee340  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004ee348  e8934d0700           call 0x5630e0
// 004ee34d  8bc7                 mov eax, edi
// 004ee34f  5f                   pop edi
// 004ee350  5e                   pop esi
// 004ee351  5d                   pop ebp
// 004ee352  5b                   pop ebx
// 004ee353  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ee357  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee35e  83c434               add esp, 0x34
// 004ee361  c3                   ret 
// 004ee362  85db                 test ebx, ebx
// 004ee364  7540                 jne 0x4ee3a6
// 004ee366  ff1590288000         call dword ptr [0x802890]
// 004ee36c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee370  3b4b18               cmp ecx, dword ptr [ebx + 0x18]
// 004ee373  7506                 jne 0x4ee37b
// 004ee375  ff1590288000         call dword ptr [0x802890]
// 004ee37b  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ee37f  8b721c               mov esi, dword ptr [edx + 0x1c]
// 004ee382  8bcd                 mov ecx, ebp
// 004ee384  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004ee38c  e84f4d0700           call 0x5630e0
// 004ee391  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ee395  5f                   pop edi
// 004ee396  8bc6                 mov eax, esi
// 004ee398  5e                   pop esi
// 004ee399  5d                   pop ebp
// 004ee39a  5b                   pop ebx
// 004ee39b  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee3a2  83c434               add esp, 0x34
// 004ee3a5  c3                   ret 
// 004ee3a6  8b1b                 mov ebx, dword ptr [ebx]
// 004ee3a8  ebc2                 jmp 0x4ee36c
#include <intrin.h>

extern "C" void __cdecl invalidParameter();

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
    _ReadWriteBarrier();
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
