// from server: 100% by king_originala
// roc 2008-06 004061e0  unit: VCApp::?$CComObject  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004061e0
//
// 004061e0  6aff                 push -1
// 004061e2  6888ce7b00           push 0x7bce88
// 004061e7  64a100000000         mov eax, dword ptr fs:[0]
// 004061ed  50                   push eax
// 004061ee  64892500000000       mov dword ptr fs:[0], esp
// 004061f5  83ec10               sub esp, 0x10
// 004061f8  53                   push ebx
// 004061f9  e86aa72900           call 0x6a0968
// 004061fe  50                   push eax
// 004061ff  8d4c2408             lea ecx, [esp + 8]
// 00406203  e85aa72900           call 0x6a0962
// 00406208  b984dc9600           mov ecx, 0x96dc84
// 0040620d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00406215  e8c6220200           call 0x4284e0
// 0040621a  8ad8                 mov bl, al
// 0040621c  8b442408             mov eax, dword ptr [esp + 8]
// 00406220  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00406228  85c0                 test eax, eax
// 0040622a  7407                 je 0x406233
// 0040622c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00406230  894804               mov dword ptr [eax + 4], ecx
// 00406233  837c241000           cmp dword ptr [esp + 0x10], 0
// 00406238  740c                 je 0x406246
// 0040623a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040623e  52                   push edx
// 0040623f  6a00                 push 0
// 00406241  e816a72900           call 0x6a095c
// 00406246  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040624a  8ac3                 mov al, bl
// 0040624c  5b                   pop ebx
// 0040624d  64890d00000000       mov dword ptr fs:[0], ecx
// 00406254  83c41c               add esp, 0x1c
// 00406257  c3                   ret 

extern "C" void* __stdcall GetState();
int __stdcall ReleaseContext(unsigned long, void*);

struct ThreadState
{
    void* reserved;
    void* current;
};

struct StateGuard
{
    void* previous;
    ThreadState* thread;
    void* context;
    int active;

    StateGuard(void*);
    ~StateGuard();
};

inline StateGuard::~StateGuard()
{
    if (thread)
        thread->current = previous;
    if (active)
        ReleaseContext(0, context);
}

struct Object
{
    bool Query();
};

extern Object globalObject;

bool Function()
{
    StateGuard guard(GetState());
    return globalObject.Query();
}
