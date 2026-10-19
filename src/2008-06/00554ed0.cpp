// from server: 86% by colin
// from server: 83% by king_originala
// roc 2008-06 00554ed0  unit: RBX::RunService  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554ed0
//
// 00554ed0  6aff                 push -1
// 00554ed2  6858dd7c00           push 0x7cdd58
// 00554ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00554edd  50                   push eax
// 00554ede  64892500000000       mov dword ptr fs:[0], esp
// 00554ee5  83ec20               sub esp, 0x20
// 00554ee8  53                   push ebx
// 00554ee9  56                   push esi
// 00554eea  57                   push edi
// 00554eeb  8bf1                 mov esi, ecx
// 00554eed  e80ed10900           call 0x5f2000
// 00554ef2  dd5c2414             fstp qword ptr [esp + 0x14]
// 00554ef6  8d44241c             lea eax, [esp + 0x1c]
// 00554efa  6a01                 push 1
// 00554efc  50                   push eax
// 00554efd  e83e1c0500           call 0x5a6b40
// 00554f02  83c408               add esp, 8
// 00554f05  8344241c01           add dword ptr [esp + 0x1c], 1
// 00554f0a  8dbe40020000         lea edi, [esi + 0x240]
// 00554f10  bb00000000           mov ebx, 0
// 00554f15  115c2420             adc dword ptr [esp + 0x20], ebx
// 00554f19  8bcf                 mov ecx, edi
// 00554f1b  897c240c             mov dword ptr [esp + 0xc], edi
// 00554f1f  e8bcfd0300           call 0x594ce0
// 00554f24  c644241001           mov byte ptr [esp + 0x10], 1
// 00554f29  895c2434             mov dword ptr [esp + 0x34], ebx
// 00554f2d  399ea8020000         cmp dword ptr [esi + 0x2a8], ebx
// 00554f33  7419                 je 0x554f4e
// 00554f35  8d4c241c             lea ecx, [esp + 0x1c]
// 00554f39  51                   push ecx
// 00554f3a  8d542410             lea edx, [esp + 0x10]
// 00554f3e  52                   push edx
// 00554f3f  8d8e4c020000         lea ecx, [esi + 0x24c]
// 00554f45  e8e6fcffff           call 0x554c30
// 00554f4a  84c0                 test al, al
// 00554f4c  7402                 je 0x554f50
// 00554f4e  b301                 mov bl, 1
// 00554f50  e8abd00900           call 0x5f2000
// 00554f55  dc642414             fsub qword ptr [esp + 0x14]
// 00554f59  8bcf                 mov ecx, edi
// 00554f5b  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00554f63  dd9ed0010000         fstp qword ptr [esi + 0x1d0]
// 00554f69  e892fd0300           call 0x594d00
// 00554f6e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00554f72  5f                   pop edi
// 00554f73  5e                   pop esi
// 00554f74  8ac3                 mov al, bl
// 00554f76  5b                   pop ebx
// 00554f77  64890d00000000       mov dword ptr fs:[0], ecx
// 00554f7e  83c42c               add esp, 0x2c
// 00554f81  c3                   ret 

extern double __cdecl clockNow();

struct Time {
    __int64 ticks;
    int kind;
};

extern void __cdecl getTime(Time*, int);

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* const mutex;
    bool locked;

    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* m) : mutex(m) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    mutex->unlock();
}

struct Condition {
    bool wait(Guard*, const Time*);
};

struct S {
    char pad0[0x1d0];
    double elapsed;
    char pad1[0x240 - 0x1d8];
    Mutex mutex;
    char pad2[0x24c - 0x248];
    Condition condition;
    char pad3[0x2a8 - 0x24d];
    int enabled;

    bool f();
};

bool S::f() {
    Mutex* mutexPtr = &mutex;
    double start = clockNow();
    Time deadline;
    getTime(&deadline, 1);
    ++deadline.ticks;
    Guard guard(mutexPtr);
    bool result = !enabled || condition.wait(&guard, &deadline);
    elapsed = clockNow() - start;
    return result;
}
