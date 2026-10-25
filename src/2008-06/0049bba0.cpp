// from server: 100% by king_originala
// roc 2008-06 0049bba0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049bba0
//
// 0049bba0  64a100000000         mov eax, dword ptr fs:[0]
// 0049bba6  6aff                 push -1
// 0049bba8  6808a17c00           push 0x7ca108
// 0049bbad  50                   push eax
// 0049bbae  64892500000000       mov dword ptr fs:[0], esp
// 0049bbb5  83ec10               sub esp, 0x10
// 0049bbb8  56                   push esi
// 0049bbb9  8bf1                 mov esi, ecx
// 0049bbbb  807e0400             cmp byte ptr [esi + 4], 0
// 0049bbbf  7562                 jne 0x49bc23
// 0049bbc1  8b4608               mov eax, dword ptr [esi + 8]
// 0049bbc4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049bbc7  55                   push ebp
// 0049bbc8  57                   push edi
// 0049bbc9  68bc069700           push 0x9706bc
// 0049bbce  6840a04900           push 0x49a040
// 0049bbd3  89442414             mov dword ptr [esp + 0x14], eax
// 0049bbd7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0049bbdb  e850b70b00           call 0x557330
// 0049bbe0  8b3de8059700         mov edi, dword ptr [0x9705e8]
// 0049bbe6  8d6f20               lea ebp, [edi + 0x20]
// 0049bbe9  83c408               add esp, 8
// 0049bbec  8bcd                 mov ecx, ebp
// 0049bbee  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049bbf2  e899740c00           call 0x563090
// 0049bbf7  c644241801           mov byte ptr [esp + 0x18], 1
// 0049bbfc  8d54240c             lea edx, [esp + 0xc]
// 0049bc00  52                   push edx
// 0049bc01  8bcf                 mov ecx, edi
// 0049bc03  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0049bc0b  e8c0d5ffff           call 0x4991d0
// 0049bc10  8bcd                 mov ecx, ebp
// 0049bc12  8930                 mov dword ptr [eax], esi
// 0049bc14  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049bc1c  e8bf740c00           call 0x5630e0
// 0049bc21  5f                   pop edi
// 0049bc22  5d                   pop ebp
// 0049bc23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049bc27  c6460401             mov byte ptr [esi + 4], 1
// 0049bc2b  5e                   pop esi
// 0049bc2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bc33  83c41c               add esp, 0x1c
// 0049bc36  c3                   ret 

struct Mutex {
    void lock();
    void unlock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Descriptor;

struct Registry {
    unsigned char padding[32];
    Mutex mutex;
    Descriptor **find(const Key &key);
};

extern Registry *registry;
extern int initializationState;
extern void __cdecl initializeRegistry();
extern void __cdecl initializeOnce(void (__cdecl *)(), int *);

struct LockGuard {
    Mutex *mutex;
    bool locked;

    LockGuard(Mutex *m);
    ~LockGuard();
};

__forceinline LockGuard::LockGuard(Mutex *m) : mutex(m) {
    mutex->lock();
    locked = true;
}

__forceinline LockGuard::~LockGuard() {
    if (locked)
        mutex->unlock();
}

struct Descriptor {
    void *vtable;
    bool registered;
    Key key;

    void registerDescriptor();
};

void Descriptor::registerDescriptor() {
    if (!registered) {
        Key localKey = key;
        initializeOnce(initializeRegistry, &initializationState);
        Registry *r = registry;
        LockGuard guard(&r->mutex);
        *r->find(localKey) = this;
    }
    registered = true;
}
