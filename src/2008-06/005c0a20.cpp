// from server: 100% by king_originala
// roc 2008-06 005c0a20  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0a20
//
// 005c0a20  55                   push ebp
// 005c0a21  8bec                 mov ebp, esp
// 005c0a23  6aff                 push -1
// 005c0a25  6860457d00           push 0x7d4560
// 005c0a2a  64a100000000         mov eax, dword ptr fs:[0]
// 005c0a30  50                   push eax
// 005c0a31  64892500000000       mov dword ptr fs:[0], esp
// 005c0a38  51                   push ecx
// 005c0a39  53                   push ebx
// 005c0a3a  56                   push esi
// 005c0a3b  57                   push edi
// 005c0a3c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c0a3f  8bf1                 mov esi, ecx
// 005c0a41  6a14                 push 0x14
// 005c0a43  c70600000000         mov dword ptr [esi], 0
// 005c0a49  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c0a50  e8cbfe0d00           call 0x6a0920
// 005c0a55  83c404               add esp, 4
// 005c0a58  85c0                 test eax, eax
// 005c0a5a  7419                 je 0x5c0a75
// 005c0a5c  b901000000           mov ecx, 1
// 005c0a61  894804               mov dword ptr [eax + 4], ecx
// 005c0a64  894808               mov dword ptr [eax + 8], ecx
// 005c0a67  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c0a6a  c70034888300         mov dword ptr [eax], 0x838834
// 005c0a70  89480c               mov dword ptr [eax + 0xc], ecx
// 005c0a73  eb02                 jmp 0x5c0a77
// 005c0a75  33c0                 xor eax, eax
// 005c0a77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c0a7a  8906                 mov dword ptr [esi], eax
// 005c0a7c  5f                   pop edi
// 005c0a7d  8bc6                 mov eax, esi
// 005c0a7f  5e                   pop esi
// 005c0a80  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0a87  5b                   pop ebx
// 005c0a88  8be5                 mov esp, ebp
// 005c0a8a  5d                   pop ebp
// 005c0a8b  c20800               ret 8
// 005c0a8e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c0a91  52                   push edx
// 005c0a92  8d4d0c               lea ecx, [ebp + 0xc]
// 005c0a95  e89653e4ff           call 0x405e30
// 005c0a9a  6a00                 push 0
// 005c0a9c  6a00                 push 0
// 005c0a9e  e8e90a0e00           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



struct Control {
    void** vtable;
    int strong;
    int weak;
    void* object;
    Deleter deleter;

    Control(void*, const Deleter&);
};

inline Control::Control(void* p, const Deleter& d)
    : strong(1), weak(1), deleter(d)
{
    vtable = controlVtable;
    object = p;
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
