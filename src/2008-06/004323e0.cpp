// from server: 100% by king_originala
// roc 2008-06 004323e0  unit: CMainFrame  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004323e0
//
// 004323e0  55                   push ebp
// 004323e1  8bec                 mov ebp, esp
// 004323e3  6aff                 push -1
// 004323e5  6890fd7b00           push 0x7bfd90
// 004323ea  64a100000000         mov eax, dword ptr fs:[0]
// 004323f0  50                   push eax
// 004323f1  64892500000000       mov dword ptr fs:[0], esp
// 004323f8  51                   push ecx
// 004323f9  53                   push ebx
// 004323fa  56                   push esi
// 004323fb  57                   push edi
// 004323fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004323ff  8bf1                 mov esi, ecx
// 00432401  6a14                 push 0x14
// 00432403  c70600000000         mov dword ptr [esi], 0
// 00432409  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00432410  e80be52600           call 0x6a0920
// 00432415  83c404               add esp, 4
// 00432418  85c0                 test eax, eax
// 0043241a  7419                 je 0x432435
// 0043241c  b901000000           mov ecx, 1
// 00432421  894804               mov dword ptr [eax + 4], ecx
// 00432424  894808               mov dword ptr [eax + 8], ecx
// 00432427  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0043242a  c700201c8100         mov dword ptr [eax], 0x811c20
// 00432430  89480c               mov dword ptr [eax + 0xc], ecx
// 00432433  eb02                 jmp 0x432437
// 00432435  33c0                 xor eax, eax
// 00432437  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0043243a  8906                 mov dword ptr [esi], eax
// 0043243c  5f                   pop edi
// 0043243d  8bc6                 mov eax, esi
// 0043243f  5e                   pop esi
// 00432440  64890d00000000       mov dword ptr fs:[0], ecx
// 00432447  5b                   pop ebx
// 00432448  8be5                 mov esp, ebp
// 0043244a  5d                   pop ebp
// 0043244b  c20800               ret 8

void* __cdecl operator new(unsigned int);

struct Deleter {
    void operator()(void*) const;
};

struct CountedBase {
    long use_count;
    long weak_count;

    CountedBase();
    virtual ~CountedBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

struct CountedBlock : CountedBase {
    void* pointer;
    Deleter deleter;

    CountedBlock(void*, Deleter);
    virtual ~CountedBlock();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

struct SharedCount {
    CountedBase* control;
    SharedCount(void*, Deleter);
};

__forceinline CountedBase::CountedBase()
    : use_count(1), weak_count(1)
{
}

__forceinline CountedBlock::CountedBlock(void* p, Deleter d)
    : pointer(p), deleter(d)
{
}

SharedCount::SharedCount(void* p, Deleter d)
    : control(0)
{
    try {
        control = new CountedBlock(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
