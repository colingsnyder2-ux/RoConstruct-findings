// from server: 90% by king_originala
// roc 2008-06 0049ba80  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ba80
//
// 0049ba80  64a100000000         mov eax, dword ptr fs:[0]
// 0049ba86  6aff                 push -1
// 0049ba88  6888707c00           push 0x7c7088
// 0049ba8d  50                   push eax
// 0049ba8e  64892500000000       mov dword ptr fs:[0], esp
// 0049ba95  83ec10               sub esp, 0x10
// 0049ba98  56                   push esi
// 0049ba99  57                   push edi
// 0049ba9a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0049ba9e  8b37                 mov esi, dword ptr [edi]
// 0049baa0  e8cb870b00           call 0x554270
// 0049baa5  3bc6                 cmp eax, esi
// 0049baa7  751d                 jne 0x49bac6
// 0049baa9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049baad  5f                   pop edi
// 0049baae  c70000000000         mov dword ptr [eax], 0
// 0049bab4  b001                 mov al, 1
// 0049bab6  5e                   pop esi
// 0049bab7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049babb  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bac2  83c41c               add esp, 0x1c
// 0049bac5  c3                   ret 
// 0049bac6  53                   push ebx
// 0049bac7  55                   push ebp
// 0049bac8  68bc069700           push 0x9706bc
// 0049bacd  6840a04900           push 0x49a040
// 0049bad2  e859b80b00           call 0x557330
// 0049bad7  8b35e8059700         mov esi, dword ptr [0x9705e8]
// 0049badd  8d5e20               lea ebx, [esi + 0x20]
// 0049bae0  83c408               add esp, 8
// 0049bae3  8bcb                 mov ecx, ebx
// 0049bae5  895c2410             mov dword ptr [esp + 0x10], ebx
// 0049bae9  e8a2750c00           call 0x563090
// 0049baee  c644241401           mov byte ptr [esp + 0x14], 1
// 0049baf3  57                   push edi
// 0049baf4  8d4c241c             lea ecx, [esp + 0x1c]
// 0049baf8  51                   push ecx
// 0049baf9  8bce                 mov ecx, esi
// 0049bafb  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0049bb03  e898cfffff           call 0x498aa0
// 0049bb08  8b38                 mov edi, dword ptr [eax]
// 0049bb0a  8b5618               mov edx, dword ptr [esi + 0x18]
// 0049bb0d  8b6804               mov ebp, dword ptr [eax + 4]
// 0049bb10  8b36                 mov esi, dword ptr [esi]
// 0049bb12  89542414             mov dword ptr [esp + 0x14], edx
// 0049bb16  85ff                 test edi, edi
// 0049bb18  7404                 je 0x49bb1e
// 0049bb1a  3bfe                 cmp edi, esi
// 0049bb1c  740a                 je 0x49bb28
// 0049bb1e  8b3590288000         mov esi, dword ptr [0x802890]
// 0049bb24  ffd6                 call esi
// 0049bb26  eb06                 jmp 0x49bb2e
// 0049bb28  8b3590288000         mov esi, dword ptr [0x802890]
// 0049bb2e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0049bb32  743e                 je 0x49bb72
// 0049bb34  85ff                 test edi, edi
// 0049bb36  7536                 jne 0x49bb6e
// 0049bb38  ffd6                 call esi
// 0049bb3a  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 0049bb3d  7502                 jne 0x49bb41
// 0049bb3f  ffd6                 call esi
// 0049bb41  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0049bb44  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049bb48  8901                 mov dword ptr [ecx], eax
// 0049bb4a  8bcb                 mov ecx, ebx
// 0049bb4c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0049bb54  e887750c00           call 0x5630e0
// 0049bb59  5d                   pop ebp
// 0049bb5a  5b                   pop ebx
// 0049bb5b  5f                   pop edi
// 0049bb5c  b001                 mov al, 1
// 0049bb5e  5e                   pop esi
// 0049bb5f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049bb63  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bb6a  83c41c               add esp, 0x1c
// 0049bb6d  c3                   ret 
// 0049bb6e  8b3f                 mov edi, dword ptr [edi]
// 0049bb70  ebc8                 jmp 0x49bb3a
// 0049bb72  8b542434             mov edx, dword ptr [esp + 0x34]
// 0049bb76  8bcb                 mov ecx, ebx
// 0049bb78  c70200000000         mov dword ptr [edx], 0
// 0049bb7e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0049bb86  e855750c00           call 0x5630e0
// 0049bb8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049bb8f  5d                   pop ebp
// 0049bb90  5b                   pop ebx
// 0049bb91  5f                   pop edi
// 0049bb92  32c0                 xor al, al
// 0049bb94  5e                   pop esi
// 0049bb95  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bb9c  83c41c               add esp, 0x1c
// 0049bb9f  c3                   ret 

struct Name;
struct Guid {
    const Name* scope;
};

struct Node {
    char padding[20];
    unsigned int value;
};

struct Map;

struct Owner {
    Map* container;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

struct Mutex {
    void lock();
    void unlock();
};

struct Map {
    Owner* owner;
    char padding[20];
    Node* end;
    char reserved[4];
    Mutex mutex;

    Iterator* find(Iterator* result, const Guid& key);
};

struct Guard {
    Mutex* mutex;
    bool locked;

    Guard(Mutex* p);
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

extern const Name& __cdecl getLocalScope();
extern void __cdecl initializeMap();
extern void __cdecl initializeOnce(void (__cdecl*)(), int*);
extern Map* globalMap;
extern int initializationFlag;
extern "C" void (__cdecl* invalid_parameter_noinfo)();

bool __cdecl lookup(const Guid& key, unsigned int* result)
{
    const Name* scope = key.scope;
    if (&getLocalScope() == scope) {
        *result = 0;
        return true;
    }

    initializeOnce(initializeMap, &initializationFlag);
    Map* map = globalMap;
    Guard guard(&map->mutex);
    Iterator storage;
    Iterator* found = map->find(&storage, key);
    Owner* owner = found->owner;
    Node* node = found->node;
    Node* end = map->end;
    Owner* endOwner = map->owner;

    if (!owner || owner != endOwner)
        invalid_parameter_noinfo();

    if (node != end) {
        if (!owner)
            invalid_parameter_noinfo();
        else
            owner = reinterpret_cast<Owner*>(owner->container);

        if (node == reinterpret_cast<Map*>(owner)->end)
            invalid_parameter_noinfo();

        *result = node->value;
        return true;
    }

    *result = 0;
    return false;
}
