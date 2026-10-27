// from server: 100% by king_originala
// roc 2008-06 005c18c0  unit: RBX::VGeometryService::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c18c0
//
// 005c18c0  55                   push ebp
// 005c18c1  8bec                 mov ebp, esp
// 005c18c3  6aff                 push -1
// 005c18c5  68c0457d00           push 0x7d45c0
// 005c18ca  64a100000000         mov eax, dword ptr fs:[0]
// 005c18d0  50                   push eax
// 005c18d1  64892500000000       mov dword ptr fs:[0], esp
// 005c18d8  51                   push ecx
// 005c18d9  53                   push ebx
// 005c18da  56                   push esi
// 005c18db  57                   push edi
// 005c18dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c18df  8bf1                 mov esi, ecx
// 005c18e1  6a14                 push 0x14
// 005c18e3  c70600000000         mov dword ptr [esi], 0
// 005c18e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c18f0  e82bf00d00           call 0x6a0920
// 005c18f5  83c404               add esp, 4
// 005c18f8  85c0                 test eax, eax
// 005c18fa  7419                 je 0x5c1915
// 005c18fc  b901000000           mov ecx, 1
// 005c1901  894804               mov dword ptr [eax + 4], ecx
// 005c1904  894808               mov dword ptr [eax + 8], ecx
// 005c1907  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c190a  c700dc888300         mov dword ptr [eax], 0x8388dc
// 005c1910  89480c               mov dword ptr [eax + 0xc], ecx
// 005c1913  eb02                 jmp 0x5c1917
// 005c1915  33c0                 xor eax, eax
// 005c1917  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c191a  8906                 mov dword ptr [esi], eax
// 005c191c  5f                   pop edi
// 005c191d  8bc6                 mov eax, esi
// 005c191f  5e                   pop esi
// 005c1920  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1927  5b                   pop ebx
// 005c1928  8be5                 mov esp, ebp
// 005c192a  5d                   pop ebp
// 005c192b  c20800               ret 8
// 005c192e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c1931  52                   push edx
// 005c1932  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1935  e8f644e4ff           call 0x405e30
// 005c193a  6a00                 push 0
// 005c193c  6a00                 push 0
// 005c193e  e849fc0d00           call 0x6a158c

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
