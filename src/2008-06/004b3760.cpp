// from server: 100% by king_originala
// roc 2008-06 004b3760  unit: RBX::Network::VMarker::?$SignalDesc  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3760
//
// 004b3760  64a100000000         mov eax, dword ptr fs:[0]
// 004b3766  6aff                 push -1
// 004b3768  6808a17c00           push 0x7ca108
// 004b376d  50                   push eax
// 004b376e  64892500000000       mov dword ptr fs:[0], esp
// 004b3775  83ec10               sub esp, 0x10
// 004b3778  56                   push esi
// 004b3779  8bf1                 mov esi, ecx
// 004b377b  807e0400             cmp byte ptr [esi + 4], 0
// 004b377f  7460                 je 0x4b37e1
// 004b3781  8b4608               mov eax, dword ptr [esi + 8]
// 004b3784  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b3787  55                   push ebp
// 004b3788  57                   push edi
// 004b3789  68bc069700           push 0x9706bc
// 004b378e  6840a04900           push 0x49a040
// 004b3793  89442414             mov dword ptr [esp + 0x14], eax
// 004b3797  894c2418             mov dword ptr [esp + 0x18], ecx
// 004b379b  e8903b0a00           call 0x557330
// 004b37a0  8b3de8059700         mov edi, dword ptr [0x9705e8]
// 004b37a6  8d6f20               lea ebp, [edi + 0x20]
// 004b37a9  83c408               add esp, 8
// 004b37ac  8bcd                 mov ecx, ebp
// 004b37ae  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b37b2  e8d9f80a00           call 0x563090
// 004b37b7  c644241801           mov byte ptr [esp + 0x18], 1
// 004b37bc  8d54240c             lea edx, [esp + 0xc]
// 004b37c0  52                   push edx
// 004b37c1  8bcf                 mov ecx, edi
// 004b37c3  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b37cb  e8f0bcffff           call 0x4af4c0
// 004b37d0  8bcd                 mov ecx, ebp
// 004b37d2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004b37da  e801f90a00           call 0x5630e0
// 004b37df  5f                   pop edi
// 004b37e0  5d                   pop ebp
// 004b37e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b37e5  c6460400             mov byte ptr [esi + 4], 0
// 004b37e9  5e                   pop esi
// 004b37ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004b37f1  83c41c               add esp, 0x1c
// 004b37f4  c3                   ret 

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;

    void lock();
    void unlock();
};

struct Registry {
    unsigned char reserved[32];
    Mutex mutex;

    void remove(const Key &key);
};

extern Registry *registry;
extern int initializationFlag;
extern void initializeRegistry();
extern void __cdecl initializeOnce(void (__cdecl *function)(), int *flag);

struct Lock {
    Mutex *mutex;
    bool locked;

    Lock(Mutex &value);
    ~Lock();
};

inline Lock::Lock(Mutex &value) : mutex(&value), locked(false)
{
    mutex->lock();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

struct S {
    unsigned int reserved;
    bool active;
    unsigned int first;
    unsigned int second;

    void f();
};

void S::f()
{
    if (active) {
        Key key;
        key.first = first;
        key.second = second;
        initializeOnce(initializeRegistry, &initializationFlag);
        Registry *value = registry;
        Lock lock(value->mutex);
        value->remove(key);
    }
    active = false;
}
