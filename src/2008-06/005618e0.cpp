// from server: 100% by king_originala
// roc 2008-06 005618e0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005618e0
//
// 005618e0  6aff                 push -1
// 005618e2  6838ee7c00           push 0x7cee38
// 005618e7  64a100000000         mov eax, dword ptr fs:[0]
// 005618ed  50                   push eax
// 005618ee  64892500000000       mov dword ptr fs:[0], esp
// 005618f5  51                   push ecx
// 005618f6  56                   push esi
// 005618f7  8bf1                 mov esi, ecx
// 005618f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005618fd  6a00                 push 0
// 005618ff  83ec28               sub esp, 0x28
// 00561902  8bc4                 mov eax, esp
// 00561904  8908                 mov dword ptr [eax], ecx
// 00561906  c7400800000000       mov dword ptr [eax + 8], 0
// 0056190d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00561911  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00561919  89642430             mov dword ptr [esp + 0x30], esp
// 0056191d  85c9                 test ecx, ecx
// 0056191f  7419                 je 0x56193a
// 00561921  894808               mov dword ptr [eax + 8], ecx
// 00561924  83c010               add eax, 0x10
// 00561927  6a00                 push 0
// 00561929  50                   push eax
// 0056192a  8b442454             mov eax, dword ptr [esp + 0x54]
// 0056192e  8b08                 mov ecx, dword ptr [eax]
// 00561930  8d54245c             lea edx, [esp + 0x5c]
// 00561934  52                   push edx
// 00561935  ffd1                 call ecx
// 00561937  83c40c               add esp, 0xc
// 0056193a  8bce                 mov ecx, esi
// 0056193c  e89ffdffff           call 0x5616e0
// 00561941  8b442420             mov eax, dword ptr [esp + 0x20]
// 00561945  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056194d  85c0                 test eax, eax
// 0056194f  7415                 je 0x561966
// 00561951  8b00                 mov eax, dword ptr [eax]
// 00561953  85c0                 test eax, eax
// 00561955  740f                 je 0x561966
// 00561957  8d542428             lea edx, [esp + 0x28]
// 0056195b  6a01                 push 1
// 0056195d  52                   push edx
// 0056195e  8bca                 mov ecx, edx
// 00561960  51                   push ecx
// 00561961  ffd0                 call eax
// 00561963  83c40c               add esp, 0xc
// 00561966  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056196a  8bc6                 mov eax, esi
// 0056196c  64890d00000000       mov dword ptr fs:[0], ecx
// 00561973  5e                   pop esi
// 00561974  83c410               add esp, 0x10
// 00561977  c22c00               ret 0x2c

typedef void (__cdecl *Manager)(void *, void *, int);

struct Argument {
    unsigned char prefix[8];
    Manager *manager;
    unsigned char padding[4];
    unsigned char storage[28];

    ~Argument();
};

struct Value {
    void *object;
    unsigned char padding[4];
    Manager *manager;
    unsigned char reserved[4];
    unsigned char storage[24];

    Value(const Argument &);
    Value(const Value &);
    ~Value();
};

inline Argument::~Argument()
{
    if (manager) {
        Manager f = *manager;
        if (f)
            f(storage, storage, 1);
    }
}

inline Value::Value(const Argument &other)
{
    object = *(void *const *)other.prefix;
    manager = 0;
    if (other.manager) {
        manager = other.manager;
        (*manager)((void *)other.storage, storage, 0);
    }
}

inline Value::~Value()
{
    if (manager) {
        Manager f = *manager;
        if (f)
            f(storage, storage, 1);
    }
}

struct S {
    S(Argument);
    void initialize(Value, int);
};

S::S(Argument argument)
{
    initialize(Value(argument), 0);
}
