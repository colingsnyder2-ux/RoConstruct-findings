// from server: 100% by tester
// roc 2008-06 0042ba50  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ba50
//
// 0042ba50  64a100000000         mov eax, dword ptr fs:[0]
// 0042ba56  6aff                 push -1
// 0042ba58  6878f47b00           push 0x7bf478
// 0042ba5d  50                   push eax
// 0042ba5e  64892500000000       mov dword ptr fs:[0], esp
// 0042ba65  56                   push esi
// 0042ba66  57                   push edi
// 0042ba67  8bf1                 mov esi, ecx
// 0042ba69  8d442418             lea eax, [esp + 0x18]
// 0042ba6d  50                   push eax
// 0042ba6e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042ba76  c70600000000         mov dword ptr [esi], 0
// 0042ba7c  e86fe81d00           call 0x60a2f0
// 0042ba81  83c404               add esp, 4
// 0042ba84  84c0                 test al, al
// 0042ba86  7522                 jne 0x42baaa
// 0042ba88  6a20                 push 0x20
// 0042ba8a  e8914e2700           call 0x6a0920
// 0042ba8f  8d4c241c             lea ecx, [esp + 0x1c]
// 0042ba93  8bf8                 mov edi, eax
// 0042ba95  51                   push ecx
// 0042ba96  57                   push edi
// 0042ba97  e8a4d5ffff           call 0x429040
// 0042ba9c  83c40c               add esp, 0xc
// 0042ba9f  897e08               mov dword ptr [esi + 8], edi
// 0042baa2  c70628068100         mov dword ptr [esi], 0x810628
// 0042baa8  eb06                 jmp 0x42bab0
// 0042baaa  c70600000000         mov dword ptr [esi], 0
// 0042bab0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0042bab4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0042babc  85c0                 test eax, eax
// 0042babe  7415                 je 0x42bad5
// 0042bac0  8b00                 mov eax, dword ptr [eax]
// 0042bac2  85c0                 test eax, eax
// 0042bac4  740f                 je 0x42bad5
// 0042bac6  8d542420             lea edx, [esp + 0x20]
// 0042baca  6a01                 push 1
// 0042bacc  52                   push edx
// 0042bacd  8bca                 mov ecx, edx
// 0042bacf  51                   push ecx
// 0042bad0  ffd0                 call eax
// 0042bad2  83c40c               add esp, 0xc
// 0042bad5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042bad9  5f                   pop edi
// 0042bada  8bc6                 mov eax, esi
// 0042badc  64890d00000000       mov dword ptr fs:[0], ecx
// 0042bae3  5e                   pop esi
// 0042bae4  83c40c               add esp, 0xc
// 0042bae7  c22400               ret 0x24

typedef void (__cdecl *Manager)(void *, void *, int);

struct ManagerTable {
    Manager destroy;
};

struct Argument {
    ManagerTable *table;
    unsigned int reserved;
    char storage[28];

    ~Argument();
};

inline Argument::~Argument()
{
    if (table) {
        Manager destroy = table->destroy;
        if (destroy)
            destroy(storage, storage, 1);
    }
}

extern bool __cdecl func_0060a2f0(const Argument *);
extern void *__cdecl operator new(unsigned int);
extern void __cdecl func_00429040(void *, const Argument *);
extern ManagerTable managerTable;

struct ThreadLogManager {
    ManagerTable *table;
    unsigned int reserved;
    void *storage;

    ThreadLogManager(Argument argument);
};

ThreadLogManager::ThreadLogManager(Argument argument)
{
    table = 0;
    if (!func_0060a2f0(&argument)) {
        void *allocated = operator new(32);
        func_00429040(allocated, &argument);
        storage = allocated;
        table = &managerTable;
    } else {
        table = 0;
    }
}
