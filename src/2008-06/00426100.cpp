// from server: 86% by colin
// from server: 83% by colin
// roc 2008-06 00426100  unit: CRobloxTreeCtrlNode  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426100
//
// 00426100  6aff                 push -1
// 00426102  680bed7b00           push 0x7bed0b
// 00426107  64a100000000         mov eax, dword ptr fs:[0]
// 0042610d  50                   push eax
// 0042610e  64892500000000       mov dword ptr fs:[0], esp
// 00426115  83ec20               sub esp, 0x20
// 00426118  53                   push ebx
// 00426119  55                   push ebp
// 0042611a  56                   push esi
// 0042611b  8d44241c             lea eax, [esp + 0x1c]
// 0042611f  57                   push edi
// 00426120  50                   push eax
// 00426121  8be9                 mov ebp, ecx
// 00426123  e8f8ee0100           call 0x445020
// 00426128  83c404               add esp, 4
// 0042612b  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0042612f  8b03                 mov eax, dword ptr [ebx]
// 00426131  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00426134  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00426138  6a01                 push 1
// 0042613a  50                   push eax
// 0042613b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00426143  e8c8d00100           call 0x443210
// 00426148  85c0                 test eax, eax
// 0042614a  0f841d010000         je 0x42626d
// 00426150  8bc8                 mov ecx, eax
// 00426152  e859c4ffff           call 0x4225b0
// 00426157  85c0                 test eax, eax
// 00426159  0f8c0e010000         jl 0x42626d
// 0042615f  8b7558               mov esi, dword ptr [ebp + 0x58]
// 00426162  81c6c4000000         add esi, 0xc4
// 00426168  8bce                 mov ecx, esi
// 0042616a  e821cf1300           call 0x563090
// 0042616f  8b0b                 mov ecx, dword ptr [ebx]
// 00426171  8d542440             lea edx, [esp + 0x40]
// 00426175  52                   push edx
// 00426176  8d44241c             lea eax, [esp + 0x1c]
// 0042617a  894c2444             mov dword ptr [esp + 0x44], ecx
// 0042617e  8d7d14               lea edi, [ebp + 0x14]
// 00426181  50                   push eax
// 00426182  8bcf                 mov ecx, edi
// 00426184  e877b40200           call 0x451600
// 00426189  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0042618c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00426190  8b3f                 mov edi, dword ptr [edi]
// 00426192  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00426196  85c0                 test eax, eax
// 00426198  7404                 je 0x42619e
// 0042619a  3bc7                 cmp eax, edi
// 0042619c  7406                 je 0x4261a4
// 0042619e  ff1590288000         call dword ptr [0x802890]
// 004261a4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004261a8  3954241c             cmp dword ptr [esp + 0x1c], edx
// 004261ac  7440                 je 0x4261ee
// 004261ae  8d4c2418             lea ecx, [esp + 0x18]
// 004261b2  e839262500           call 0x6787f0
// 004261b7  8b7804               mov edi, dword ptr [eax + 4]
// 004261ba  8bce                 mov ecx, esi
// 004261bc  c644243800           mov byte ptr [esp + 0x38], 0
// 004261c1  e81acf1300           call 0x5630e0
// 004261c6  8d4c2420             lea ecx, [esp + 0x20]
// 004261ca  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 004261d2  e889a41d00           call 0x600660
// 004261d7  8bc7                 mov eax, edi
// 004261d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004261dd  64890d00000000       mov dword ptr fs:[0], ecx
// 004261e4  5f                   pop edi
// 004261e5  5e                   pop esi
// 004261e6  5d                   pop ebp
// 004261e7  5b                   pop ebx
// 004261e8  83c42c               add esp, 0x2c
// 004261eb  c20400               ret 4
// 004261ee  8bce                 mov ecx, esi
// 004261f0  c644243800           mov byte ptr [esp + 0x38], 0
// 004261f5  e8e6ce1300           call 0x5630e0
// 004261fa  688c000000           push 0x8c
// 004261ff  e81ca72700           call 0x6a0920
// 00426204  8bf0                 mov esi, eax
// 00426206  83c404               add esp, 4
// 00426209  89742440             mov dword ptr [esp + 0x40], esi
// 0042620d  c644243802           mov byte ptr [esp + 0x38], 2
// 00426212  85f6                 test esi, esi
// 00426214  741f                 je 0x426235
// 00426216  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00426219  50                   push eax
// 0042621a  83ec08               sub esp, 8
// 0042621d  8bcc                 mov ecx, esp
// 0042621f  89642424             mov dword ptr [esp + 0x24], esp
// 00426223  53                   push ebx
// 00426224  e8c7b4feff           call 0x4116f0
// 00426229  55                   push ebp
// 0042622a  8bce                 mov ecx, esi
// 0042622c  e8affbffff           call 0x425de0
// 00426231  8bf0                 mov esi, eax
// 00426233  eb02                 jmp 0x426237
// 00426235  33f6                 xor esi, esi
// 00426237  8b16                 mov edx, dword ptr [esi]
// 00426239  8b420c               mov eax, dword ptr [edx + 0xc]
// 0042623c  8bce                 mov ecx, esi
// 0042623e  c644243800           mov byte ptr [esp + 0x38], 0
// 00426243  ffd0                 call eax
// 00426245  8d4c2420             lea ecx, [esp + 0x20]
// 00426249  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00426251  e80aa41d00           call 0x600660
// 00426256  8bc6                 mov eax, esi
// 00426258  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042625c  64890d00000000       mov dword ptr fs:[0], ecx
// 00426263  5f                   pop edi
// 00426264  5e                   pop esi
// 00426265  5d                   pop ebp
// 00426266  5b                   pop ebx
// 00426267  83c42c               add esp, 0x2c
// 0042626a  c20400               ret 4
// 0042626d  8b742424             mov esi, dword ptr [esp + 0x24]
// 00426271  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00426279  85f6                 test esi, esi
// 0042627b  742a                 je 0x4262a7
// 0042627d  8d4e04               lea ecx, [esi + 4]
// 00426280  83caff               or edx, 0xffffffff
// 00426283  f00fc111             lock xadd dword ptr [ecx], edx
// 00426287  751e                 jne 0x4262a7
// 00426289  8b06                 mov eax, dword ptr [esi]
// 0042628b  8b5004               mov edx, dword ptr [eax + 4]
// 0042628e  8bce                 mov ecx, esi
// 00426290  ffd2                 call edx
// 00426292  8d4608               lea eax, [esi + 8]
// 00426295  83c9ff               or ecx, 0xffffffff
// 00426298  f00fc108             lock xadd dword ptr [eax], ecx
// 0042629c  7509                 jne 0x4262a7
// 0042629e  8b16                 mov edx, dword ptr [esi]
// 004262a0  8b4208               mov eax, dword ptr [edx + 8]
// 004262a3  8bce                 mov ecx, esi
// 004262a5  ffd0                 call eax
// 004262a7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004262ab  5f                   pop edi
// 004262ac  5e                   pop esi
// 004262ad  5d                   pop ebp
// 004262ae  33c0                 xor eax, eax
// 004262b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004262b7  5b                   pop ebx
// 004262b8  83c42c               add esp, 0x2c
// 004262bb  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entity {
    char padding[0x1c];
    int id;
};

struct Handle {
    Entity* pointer;
    RefCount* count;
    Handle(const Handle&);
    ~Handle();
};

inline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Result {
    int get();
};

struct Manager {
    int invoke(int, int);
};

struct ManagerHandle {
    Manager* pointer;
    RefCount* count;
    ~ManagerHandle();
};

inline ManagerHandle::~ManagerHandle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

ManagerHandle __cdecl acquire();

struct Mutex {
    void lock();
    void unlock();
};

struct Owner {
    char padding[0xc4];
    Mutex mutex;
};

struct Node;

struct Pair {
    Entity* key;
    Node* value;
};

struct Iterator {
    void* owner;
    void* position;
    Pair* get();
    bool operator!=(const Iterator&) const;
};

inline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

struct Map {
    void* owner;
    char padding[0x14];
    void* sentinel;
    Iterator find(Entity* const&);
    Iterator end() const;
};

inline Iterator Map::end() const
{
    Iterator result;
    result.owner = owner;
    result.position = sentinel;
    return result;
}

struct Lock {
    Mutex& mutex;
    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(m)
{
    mutex.lock();
}

inline Lock::~Lock()
{
    mutex.unlock();
}

struct Node {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void update();
    char padding0[0x10];
    Map children;
    char padding1[0x28];
    Owner* owner;
    char padding2[0x30];

    Node(Node*, Handle, Owner*);
    Node* findChild(const Handle&);
};

Node* Node::findChild(const Handle& handle)
{
    ManagerHandle manager = acquire();
    Result* result = (Result*)manager.pointer->invoke(handle.pointer->id, 1);
    if (!result || result->get() < 0)
        return 0;

    {
        Lock lock(owner->mutex);
        Entity* key = handle.pointer;
        Iterator it = children.find(key);
        Iterator last = children.end();
        if (it != last)
            return it.get()->value;
    }

    Node* node = new Node(this, handle, owner);
    node->update();
    return node;
}
