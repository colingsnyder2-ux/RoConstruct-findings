// from server: 77% by colin
// from server: 75% by king_originala
// roc 2008-06 004b4bb0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4bb0
//
// 004b4bb0  6aff                 push -1
// 004b4bb2  6838897c00           push 0x7c8938
// 004b4bb7  64a100000000         mov eax, dword ptr fs:[0]
// 004b4bbd  50                   push eax
// 004b4bbe  64892500000000       mov dword ptr fs:[0], esp
// 004b4bc5  83ec14               sub esp, 0x14
// 004b4bc8  53                   push ebx
// 004b4bc9  55                   push ebp
// 004b4bca  56                   push esi
// 004b4bcb  57                   push edi
// 004b4bcc  8bf1                 mov esi, ecx
// 004b4bce  6a06                 push 6
// 004b4bd0  8d4c2414             lea ecx, [esp + 0x14]
// 004b4bd4  e83770f7ff           call 0x42bc10
// 004b4bd9  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004b4bdd  8d442434             lea eax, [esp + 0x34]
// 004b4be1  50                   push eax
// 004b4be2  8d4c2418             lea ecx, [esp + 0x18]
// 004b4be6  81c6fc2c0000         add esi, 0x2cfc
// 004b4bec  51                   push ecx
// 004b4bed  8bce                 mov ecx, esi
// 004b4bef  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004b4bf7  897c243c             mov dword ptr [esp + 0x3c], edi
// 004b4bfb  e8d0cf0d00           call 0x591bd0
// 004b4c00  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004b4c04  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004b4c07  8b06                 mov eax, dword ptr [esi]
// 004b4c09  85ed                 test ebp, ebp
// 004b4c0b  7404                 je 0x4b4c11
// 004b4c0d  3be8                 cmp ebp, eax
// 004b4c0f  7406                 je 0x4b4c17
// 004b4c11  ff1590288000         call dword ptr [0x802890]
// 004b4c17  395c2418             cmp dword ptr [esp + 0x18], ebx
// 004b4c1b  0f85ea000000         jne 0x4b4d0b
// 004b4c21  8d542414             lea edx, [esp + 0x14]
// 004b4c25  57                   push edi
// 004b4c26  52                   push edx
// 004b4c27  e864b5f6ff           call 0x420190
// 004b4c2c  83c408               add esp, 8
// 004b4c2f  837c241400           cmp dword ptr [esp + 0x14], 0
// 004b4c34  b301                 mov bl, 1
// 004b4c36  885c242c             mov byte ptr [esp + 0x2c], bl
// 004b4c3a  756d                 jne 0x4b4ca9
// 004b4c3c  8d44241c             lea eax, [esp + 0x1c]
// 004b4c40  50                   push eax
// 004b4c41  e8da490b00           call 0x569620
// 004b4c46  83c404               add esp, 4
// 004b4c49  837f1c10             cmp dword ptr [edi + 0x1c], 0x10
// 004b4c4d  c644242c02           mov byte ptr [esp + 0x2c], 2
// 004b4c52  7205                 jb 0x4b4c59
// 004b4c54  8b4f08               mov ecx, dword ptr [edi + 8]
// 004b4c57  eb03                 jmp 0x4b4c5c
// 004b4c59  8d4f08               lea ecx, [edi + 8]
// 004b4c5c  8b00                 mov eax, dword ptr [eax]
// 004b4c5e  51                   push ecx
// 004b4c5f  68e44d8200           push 0x824de4
// 004b4c64  6a03                 push 3
// 004b4c66  50                   push eax
// 004b4c67  e834470b00           call 0x5693a0
// 004b4c6c  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b4c70  83c410               add esp, 0x10
// 004b4c73  885c242c             mov byte ptr [esp + 0x2c], bl
// 004b4c77  85c0                 test eax, eax
// 004b4c79  742e                 je 0x4b4ca9
// 004b4c7b  8be8                 mov ebp, eax
// 004b4c7d  83c004               add eax, 4
// 004b4c80  83c9ff               or ecx, 0xffffffff
// 004b4c83  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4c87  7520                 jne 0x4b4ca9
// 004b4c89  8b5500               mov edx, dword ptr [ebp]
// 004b4c8c  8b4204               mov eax, dword ptr [edx + 4]
// 004b4c8f  8bcd                 mov ecx, ebp
// 004b4c91  ffd0                 call eax
// 004b4c93  8d4d08               lea ecx, [ebp + 8]
// 004b4c96  83caff               or edx, 0xffffffff
// 004b4c99  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4c9d  750a                 jne 0x4b4ca9
// 004b4c9f  8b4500               mov eax, dword ptr [ebp]
// 004b4ca2  8b5008               mov edx, dword ptr [eax + 8]
// 004b4ca5  8bcd                 mov ecx, ebp
// 004b4ca7  ffd2                 call edx
// 004b4ca9  8d442434             lea eax, [esp + 0x34]
// 004b4cad  50                   push eax
// 004b4cae  8bce                 mov ecx, esi
// 004b4cb0  897c2438             mov dword ptr [esp + 0x38], edi
// 004b4cb4  e857d90d00           call 0x592610
// 004b4cb9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b4cbd  8d542418             lea edx, [esp + 0x18]
// 004b4cc1  8908                 mov dword ptr [eax], ecx
// 004b4cc3  52                   push edx
// 004b4cc4  8d4804               lea ecx, [eax + 4]
// 004b4cc7  e8e4d8f4ff           call 0x4025b0
// 004b4ccc  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b4cd0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004b4cd4  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004b4cd9  85c0                 test eax, eax
// 004b4cdb  744e                 je 0x4b4d2b
// 004b4cdd  8bf0                 mov esi, eax
// 004b4cdf  83c004               add eax, 4
// 004b4ce2  83c9ff               or ecx, 0xffffffff
// 004b4ce5  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4ce9  7540                 jne 0x4b4d2b
// 004b4ceb  8b16                 mov edx, dword ptr [esi]
// 004b4ced  8b4204               mov eax, dword ptr [edx + 4]
// 004b4cf0  8bce                 mov ecx, esi
// 004b4cf2  ffd0                 call eax
// 004b4cf4  8d4e08               lea ecx, [esi + 8]
// 004b4cf7  83caff               or edx, 0xffffffff
// 004b4cfa  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4cfe  752b                 jne 0x4b4d2b
// 004b4d00  8b06                 mov eax, dword ptr [esi]
// 004b4d02  8b5008               mov edx, dword ptr [eax + 8]
// 004b4d05  8bce                 mov ecx, esi
// 004b4d07  ffd2                 call edx
// 004b4d09  eb20                 jmp 0x4b4d2b
// 004b4d0b  85ed                 test ebp, ebp
// 004b4d0d  7567                 jne 0x4b4d76
// 004b4d0f  ff1590288000         call dword ptr [0x802890]
// 004b4d15  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b4d19  3b4518               cmp eax, dword ptr [ebp + 0x18]
// 004b4d1c  7506                 jne 0x4b4d24
// 004b4d1e  ff1590288000         call dword ptr [0x802890]
// 004b4d24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b4d28  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 004b4d2b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004b4d33  e8786ef7ff           call 0x42bbb0
// 004b4d38  8bf0                 mov esi, eax
// 004b4d3a  8bce                 mov ecx, esi
// 004b4d3c  e82f280f00           call 0x5a7570
// 004b4d41  8bf8                 mov edi, eax
// 004b4d43  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b4d47  3bf8                 cmp edi, eax
// 004b4d49  7414                 je 0x4b4d5f
// 004b4d4b  50                   push eax
// 004b4d4c  8bce                 mov ecx, esi
// 004b4d4e  e85d290f00           call 0x5a76b0
// 004b4d53  85ff                 test edi, edi
// 004b4d55  7408                 je 0x4b4d5f
// 004b4d57  57                   push edi
// 004b4d58  8bce                 mov ecx, esi
// 004b4d5a  e891220f00           call 0x5a6ff0
// 004b4d5f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004b4d63  5f                   pop edi
// 004b4d64  5e                   pop esi
// 004b4d65  5d                   pop ebp
// 004b4d66  8bc3                 mov eax, ebx
// 004b4d68  5b                   pop ebx
// 004b4d69  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4d70  83c420               add esp, 0x20
// 004b4d73  c20400               ret 4
// 004b4d76  8b6d00               mov ebp, dword ptr [ebp]
// 004b4d79  eb9a                 jmp 0x4b4d15

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Key {
    char padding[8];
    union {
        char text[16];
        char* pointer;
    } storage;
    unsigned int size;
    unsigned int capacity;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct ControlSlot {
    Control* control;
    ControlSlot& operator=(const ControlSlot&);
};

struct Value {
    void* pointer;
    ControlSlot control;
};

struct Node {
    char padding[16];
    void* value;
};

struct Map;

struct Proxy {
    Map* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Map {
    Proxy* proxy;
    char padding[20];
    Node* end;
    void find(Iterator*, Key**);
    Value* lookup(Key**);
};

struct Manager {
    void* current();
    void set(void*);
    void release(void*);
};

extern Manager* __cdecl getManager();

struct Guard {
    void* saved;
    Guard(int);
    __forceinline ~Guard();
};

__forceinline Guard::~Guard() {
    Manager* manager = getManager();
    void* previous = manager->current();
    if (previous != saved) {
        manager->set(saved);
        if (previous)
            manager->release(previous);
    }
}

extern Shared __cdecl createDefault(Key*);
extern Shared* __cdecl getLogger(Shared*);
extern void __cdecl logMessage(void*, int, const char*, ...);

struct S {
    char padding[0x2cfc];
    Map objects;
    void* f(Key*);
};

void* S::f(Key* key) {
    Guard guard(6);
    Key* original = key;
    Map* map = &objects;
    void* result;

    {
        Iterator iterator;
        key = original;
        map->find(&iterator, &key);

        Proxy* proxy = iterator.proxy;
        Node* end = map->end;
        Proxy* expected = map->proxy;

        if (!proxy || proxy != expected)
            _invalid_parameter_noinfo();

        if (iterator.node == end)
            goto create;

        Map* owner = reinterpret_cast<Map*>(proxy);
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            owner = proxy->owner;

        if (iterator.node == owner->end)
            _invalid_parameter_noinfo();

        result = iterator.node->value;
        goto done;
    }

create:
    {
        Shared value = createDefault(original);
        if (!value.pointer) {
            Shared logger;
            Shared* logging = getLogger(&logger);
            logMessage(logging->pointer, 3,
                       "Replication: Can't create default object of type %s",
                       original->capacity >= 16
                           ? original->storage.pointer
                           : original->storage.text);
        }

        key = original;
        Value* destination = map->lookup(&key);
        destination->pointer = value.pointer;
        destination->control =
            *reinterpret_cast<ControlSlot*>(&value.control);
        result = value.pointer;
    }

done:
    return result;
}
