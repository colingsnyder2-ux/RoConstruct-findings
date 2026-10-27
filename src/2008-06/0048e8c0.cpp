// from server: 100% by king_originala
// roc 2008-06 0048e8c0  unit: RBX::VHopperBin::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e8c0
//
// 0048e8c0  55                   push ebp
// 0048e8c1  8bec                 mov ebp, esp
// 0048e8c3  6aff                 push -1
// 0048e8c5  6850637c00           push 0x7c6350
// 0048e8ca  64a100000000         mov eax, dword ptr fs:[0]
// 0048e8d0  50                   push eax
// 0048e8d1  64892500000000       mov dword ptr fs:[0], esp
// 0048e8d8  51                   push ecx
// 0048e8d9  53                   push ebx
// 0048e8da  56                   push esi
// 0048e8db  57                   push edi
// 0048e8dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048e8df  8bf1                 mov esi, ecx
// 0048e8e1  6a14                 push 0x14
// 0048e8e3  c70600000000         mov dword ptr [esi], 0
// 0048e8e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048e8f0  e82b202100           call 0x6a0920
// 0048e8f5  83c404               add esp, 4
// 0048e8f8  85c0                 test eax, eax
// 0048e8fa  7419                 je 0x48e915
// 0048e8fc  b901000000           mov ecx, 1
// 0048e901  894804               mov dword ptr [eax + 4], ecx
// 0048e904  894808               mov dword ptr [eax + 8], ecx
// 0048e907  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048e90a  c7008c178200         mov dword ptr [eax], 0x82178c
// 0048e910  89480c               mov dword ptr [eax + 0xc], ecx
// 0048e913  eb02                 jmp 0x48e917
// 0048e915  33c0                 xor eax, eax
// 0048e917  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048e91a  8906                 mov dword ptr [esi], eax
// 0048e91c  5f                   pop edi
// 0048e91d  8bc6                 mov eax, esi
// 0048e91f  5e                   pop esi
// 0048e920  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e927  5b                   pop ebx
// 0048e928  8be5                 mov esp, ebp
// 0048e92a  5d                   pop ebp
// 0048e92b  c20800               ret 8
// 0048e92e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048e931  52                   push edx
// 0048e932  8d4d0c               lea ecx, [ebp + 0xc]
// 0048e935  e8f674f7ff           call 0x405e30
// 0048e93a  6a00                 push 0
// 0048e93c  6a00                 push 0
// 0048e93e  e8492c2100           call 0x6a158c

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
