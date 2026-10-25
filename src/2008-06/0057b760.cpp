// from server: 100% by king_originala
// roc 2008-06 0057b760  unit: RBX::VInstance::?$SignalDesc  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b760
//
// 0057b760  64a100000000         mov eax, dword ptr fs:[0]
// 0057b766  6aff                 push -1
// 0057b768  6838ee7c00           push 0x7cee38
// 0057b76d  50                   push eax
// 0057b76e  64892500000000       mov dword ptr fs:[0], esp
// 0057b775  56                   push esi
// 0057b776  57                   push edi
// 0057b777  8bf1                 mov esi, ecx
// 0057b779  8d442418             lea eax, [esp + 0x18]
// 0057b77d  50                   push eax
// 0057b77e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057b786  c70600000000         mov dword ptr [esi], 0
// 0057b78c  e85feb0800           call 0x60a2f0
// 0057b791  83c404               add esp, 4
// 0057b794  84c0                 test al, al
// 0057b796  7522                 jne 0x57b7ba
// 0057b798  6a38                 push 0x38
// 0057b79a  e881511200           call 0x6a0920
// 0057b79f  8d4c241c             lea ecx, [esp + 0x1c]
// 0057b7a3  8bf8                 mov edi, eax
// 0057b7a5  51                   push ecx
// 0057b7a6  57                   push edi
// 0057b7a7  e874c3ffff           call 0x577b20
// 0057b7ac  83c40c               add esp, 0xc
// 0057b7af  897e08               mov dword ptr [esi + 8], edi
// 0057b7b2  c706ec028300         mov dword ptr [esi], 0x8302ec
// 0057b7b8  eb06                 jmp 0x57b7c0
// 0057b7ba  c70600000000         mov dword ptr [esi], 0
// 0057b7c0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057b7c4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057b7cc  85c0                 test eax, eax
// 0057b7ce  7415                 je 0x57b7e5
// 0057b7d0  8b00                 mov eax, dword ptr [eax]
// 0057b7d2  85c0                 test eax, eax
// 0057b7d4  740f                 je 0x57b7e5
// 0057b7d6  8d542428             lea edx, [esp + 0x28]
// 0057b7da  6a01                 push 1
// 0057b7dc  52                   push edx
// 0057b7dd  8bca                 mov ecx, edx
// 0057b7df  51                   push ecx
// 0057b7e0  ffd0                 call eax
// 0057b7e2  83c40c               add esp, 0xc
// 0057b7e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057b7e9  5f                   pop edi
// 0057b7ea  8bc6                 mov eax, esi
// 0057b7ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b7f3  5e                   pop esi
// 0057b7f4  83c40c               add esp, 0xc
// 0057b7f7  c23c00               ret 0x3c

struct Manager {
    void (__cdecl *destroy)(void *, void *, int);
};

struct Argument {
    unsigned char prefix[8];
    const Manager *manager;
    unsigned char reserved[4];
    unsigned char storage[44];

    ~Argument();
};

inline Argument::~Argument()
{
    if (manager) {
        void (__cdecl *fn)(void *, void *, int) = manager->destroy;
        if (fn)
            fn(storage, storage, 1);
    }
}

extern bool __cdecl func_0060a2f0();
extern void *__cdecl allocate(unsigned int);
extern void __cdecl construct(void *, const Argument *);
extern const Manager allocatedManager;

struct S {
    const Manager *manager;
    unsigned int reserved;
    void *object;

    S(Argument argument);
};

S::S(Argument argument)
{
    manager = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument *)>(
            func_0060a2f0)(&argument)) {
        void *p = allocate(56);
        construct(p, &argument);
        object = p;
        manager = &allocatedManager;
    } else {
        manager = 0;
    }
}
