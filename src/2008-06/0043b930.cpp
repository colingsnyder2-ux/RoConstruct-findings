// from server: 100% by king_originala
// roc 2008-06 0043b930  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b930
//
// 0043b930  6aff                 push -1
// 0043b932  689a057c00           push 0x7c059a
// 0043b937  64a100000000         mov eax, dword ptr fs:[0]
// 0043b93d  50                   push eax
// 0043b93e  64892500000000       mov dword ptr fs:[0], esp
// 0043b945  83ec10               sub esp, 0x10
// 0043b948  53                   push ebx
// 0043b949  33db                 xor ebx, ebx
// 0043b94b  895c2404             mov dword ptr [esp + 4], ebx
// 0043b94f  56                   push esi
// 0043b950  8bf1                 mov esi, ecx
// 0043b952  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043b958  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043b95e  895c240c             mov dword ptr [esp + 0xc], ebx
// 0043b962  895c2410             mov dword ptr [esp + 0x10], ebx
// 0043b966  50                   push eax
// 0043b967  8d4c2410             lea ecx, [esp + 0x10]
// 0043b96b  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0043b973  895c2418             mov dword ptr [esp + 0x18], ebx
// 0043b977  e884b51300           call 0x576f00
// 0043b97c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0043b980  c744242002000000     mov dword ptr [esp + 0x20], 2
// 0043b988  3bc3                 cmp eax, ebx
// 0043b98a  7405                 je 0x43b991
// 0043b98c  83c014               add eax, 0x14
// 0043b98f  eb02                 jmp 0x43b993
// 0043b991  33c0                 xor eax, eax
// 0043b993  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 0043b999  8b11                 mov edx, dword ptr [ecx]
// 0043b99b  8b742428             mov esi, dword ptr [esp + 0x28]
// 0043b99f  50                   push eax
// 0043b9a0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0043b9a3  56                   push esi
// 0043b9a4  ffd0                 call eax
// 0043b9a6  8d4c240c             lea ecx, [esp + 0xc]
// 0043b9aa  c744240801000000     mov dword ptr [esp + 8], 1
// 0043b9b2  885c2420             mov byte ptr [esp + 0x20], bl
// 0043b9b6  e805ba1300           call 0x5773c0
// 0043b9bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043b9bf  8bc6                 mov eax, esi
// 0043b9c1  5e                   pop esi
// 0043b9c2  5b                   pop ebx
// 0043b9c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0043b9ca  83c41c               add esp, 0x1c
// 0043b9cd  c20800               ret 8

struct Result {
    unsigned char data[28];
    ~Result();
};

struct Item {
    unsigned char padding[20];
    Result value;
};

struct LockData {
    void* first;
    void* second;
    int third;

    LockData();
    void acquire(void*);
    ~LockData();
};

__forceinline LockData::LockData()
    : first(0), second(0) {
}

struct Lock {
    LockData data;

    Lock(void*);
    ~Lock();
};

__forceinline Lock::Lock(void* mutex)
    : data() {
    data.third = 0;
    data.acquire(mutex);
}

__forceinline Lock::~Lock() {
}

struct Source {
    unsigned char padding[0x198];
    void* mutex;
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual Result fetch(Result*) = 0;
};

struct S {
    unsigned char padding[0x128];
    Source* source;
    Interface* target;

    Result f(Item*);
};

Result S::f(Item* item) {
    Lock lock(source->mutex);
    return target->fetch(item ? &item->value : 0);
}
