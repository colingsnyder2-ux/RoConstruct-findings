// from server: 100% by king_originala
// roc 2008-06 0042a3d0  unit: ThreadLogManager  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a3d0
//
// 0042a3d0  6aff                 push -1
// 0042a3d2  682bf57b00           push 0x7bf52b
// 0042a3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0042a3dd  50                   push eax
// 0042a3de  64892500000000       mov dword ptr fs:[0], esp
// 0042a3e5  83ec08               sub esp, 8
// 0042a3e8  53                   push ebx
// 0042a3e9  55                   push ebp
// 0042a3ea  56                   push esi
// 0042a3eb  57                   push edi
// 0042a3ec  6a20                 push 0x20
// 0042a3ee  8be9                 mov ebp, ecx
// 0042a3f0  e82b652700           call 0x6a0920
// 0042a3f5  8bd8                 mov ebx, eax
// 0042a3f7  83c404               add esp, 4
// 0042a3fa  895c2410             mov dword ptr [esp + 0x10], ebx
// 0042a3fe  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0042a406  85db                 test ebx, ebx
// 0042a408  7453                 je 0x42a45d
// 0042a40a  6a00                 push 0
// 0042a40c  83ec20               sub esp, 0x20
// 0042a40f  8bf4                 mov esi, esp
// 0042a411  c70600000000         mov dword ptr [esi], 0
// 0042a417  a188048100           mov eax, dword ptr [0x810488]
// 0042a41c  89642438             mov dword ptr [esp + 0x38], esp
// 0042a420  8d7e08               lea edi, [esi + 8]
// 0042a423  85c0                 test eax, eax
// 0042a425  7409                 je 0x42a430
// 0042a427  6a01                 push 1
// 0042a429  57                   push edi
// 0042a42a  57                   push edi
// 0042a42b  ffd0                 call eax
// 0042a42d  83c40c               add esp, 0xc
// 0042a430  b8707b4200           mov eax, 0x427b70
// 0042a435  85c0                 test eax, eax
// 0042a437  7415                 je 0x42a44e
// 0042a439  c707707b4200         mov dword ptr [edi], 0x427b70
// 0042a43f  8bcb                 mov ecx, ebx
// 0042a441  c70688048100         mov dword ptr [esi], 0x810488
// 0042a447  e8e4feffff           call 0x42a330
// 0042a44c  eb11                 jmp 0x42a45f
// 0042a44e  8bcb                 mov ecx, ebx
// 0042a450  c70600000000         mov dword ptr [esi], 0
// 0042a456  e8d5feffff           call 0x42a330
// 0042a45b  eb02                 jmp 0x42a45f
// 0042a45d  33c0                 xor eax, eax
// 0042a45f  50                   push eax
// 0042a460  8bcd                 mov ecx, ebp
// 0042a462  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0042a46a  e891edffff           call 0x429200
// 0042a46f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042a473  5f                   pop edi
// 0042a474  5e                   pop esi
// 0042a475  8bc5                 mov eax, ebp
// 0042a477  5d                   pop ebp
// 0042a478  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a47f  5b                   pop ebx
// 0042a480  83c414               add esp, 0x14
// 0042a483  c3                   ret 

typedef void (__cdecl *Manager)(void *, void *, int);

struct ManagerTable {
    Manager destroy;
};

extern ManagerTable functionTable;
extern void __cdecl threadEntry();

struct Argument {
    ManagerTable *table;
    unsigned int reserved;
    char storage[24];

    Argument(void (__cdecl *f)());
    ~Argument();
};

inline Argument::Argument(void (__cdecl *f)())
{
    table = 0;
    void *destination = storage;
    if (functionTable.destroy)
        functionTable.destroy(destination, destination, 1);
    if (f) {
        *reinterpret_cast<void (__cdecl **)()>(destination) = f;
        table = &functionTable;
    } else {
        table = 0;
    }
}

inline Argument::~Argument()
{
    if (table)
        table->destroy(storage, storage, 0);
}

struct Worker {
    char data[32];
    Worker(Argument, int);
};

struct ThreadLogManager {
    void assign(Worker *);
    ThreadLogManager *initialize();
};

ThreadLogManager *ThreadLogManager::initialize()
{
    Worker *worker = new Worker(threadEntry, 0);
    assign(worker);
    return this;
}
