// from server: 100% by king_originala
// roc 2008-06 004246d0  unit: CSelectionTreeCtrl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004246d0
//
// 004246d0  6aff                 push -1
// 004246d2  6888ea7b00           push 0x7bea88
// 004246d7  64a100000000         mov eax, dword ptr fs:[0]
// 004246dd  50                   push eax
// 004246de  64892500000000       mov dword ptr fs:[0], esp
// 004246e5  83ec14               sub esp, 0x14
// 004246e8  56                   push esi
// 004246e9  8bf1                 mov esi, ecx
// 004246eb  57                   push edi
// 004246ec  8dbec4000000         lea edi, [esi + 0xc4]
// 004246f2  8bcf                 mov ecx, edi
// 004246f4  897c2408             mov dword ptr [esp + 8], edi
// 004246f8  e893e91300           call 0x563090
// 004246fd  c644240c01           mov byte ptr [esp + 0xc], 1
// 00424702  8d44242c             lea eax, [esp + 0x2c]
// 00424706  50                   push eax
// 00424707  8d4c2414             lea ecx, [esp + 0x14]
// 0042470b  51                   push ecx
// 0042470c  8d8e04010000         lea ecx, [esi + 0x104]
// 00424712  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0042471a  e821451c00           call 0x5e8c40
// 0042471f  8bcf                 mov ecx, edi
// 00424721  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00424729  e8b2e91300           call 0x5630e0
// 0042472e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00424732  5f                   pop edi
// 00424733  5e                   pop esi
// 00424734  64890d00000000       mov dword ptr fs:[0], ecx
// 0042473b  83c420               add esp, 0x20
// 0042473e  c20400               ret 4

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;

    void lock();
    void unlock();
};

struct Result {
    void *data[3];
};

struct Container {
    void operation(Result *result, const unsigned int *value);
};

struct LockGuard {
    Mutex *mutex;
    bool locked;

    LockGuard(Mutex &m) : mutex(&m) {
        mutex->lock();
        locked = true;
    }

    ~LockGuard() {
        if (locked)
            mutex->unlock();
    }
};

struct CSelectionTreeCtrl {
    char padding0[0xc4];
    Mutex mutex;
    char padding1[0x34];
    Container container;

    void f(unsigned int value);
};

void CSelectionTreeCtrl::f(unsigned int value)
{
    LockGuard guard(mutex);
    Result result;
    container.operation(&result, &value);
}
