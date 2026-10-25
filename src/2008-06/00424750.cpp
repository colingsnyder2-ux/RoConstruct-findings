// from server: 100% by king_originala
// roc 2008-06 00424750  unit: CSelectionTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424750
//
// 00424750  6aff                 push -1
// 00424752  6808a17c00           push 0x7ca108
// 00424757  64a100000000         mov eax, dword ptr fs:[0]
// 0042475d  50                   push eax
// 0042475e  64892500000000       mov dword ptr fs:[0], esp
// 00424765  83ec08               sub esp, 8
// 00424768  56                   push esi
// 00424769  8bf1                 mov esi, ecx
// 0042476b  57                   push edi
// 0042476c  8dbec4000000         lea edi, [esi + 0xc4]
// 00424772  8bcf                 mov ecx, edi
// 00424774  897c2408             mov dword ptr [esp + 8], edi
// 00424778  e813e91300           call 0x563090
// 0042477d  c644240c01           mov byte ptr [esp + 0xc], 1
// 00424782  8d442420             lea eax, [esp + 0x20]
// 00424786  50                   push eax
// 00424787  8d8e04010000         lea ecx, [esi + 0x104]
// 0042478d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00424795  e8c6571c00           call 0x5e9f60
// 0042479a  8bcf                 mov ecx, edi
// 0042479c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004247a4  e837e91300           call 0x5630e0
// 004247a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004247ad  5f                   pop edi
// 004247ae  5e                   pop esi
// 004247af  64890d00000000       mov dword ptr fs:[0], ecx
// 004247b6  83c414               add esp, 0x14
// 004247b9  c20400               ret 4

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;

    void lock();
    void unlock();
};

struct ScopedLock {
    Mutex &mutex;
    bool locked;

    ScopedLock(Mutex &m);
    ~ScopedLock();
};

inline ScopedLock::ScopedLock(Mutex &m) : mutex(m), locked(false)
{
    mutex.lock();
    locked = true;
}

inline ScopedLock::~ScopedLock()
{
    if (locked)
        mutex.unlock();
}

struct Container {
    void insert(void **value);
};

struct CSelectionTreeCtrl {
    unsigned char padding0[0xc4];
    Mutex mutex;
    unsigned char padding1[0x34];
    Container container;

    void f(void *value);
};

void CSelectionTreeCtrl::f(void *value)
{
    ScopedLock lock(mutex);
    container.insert(&value);
}
