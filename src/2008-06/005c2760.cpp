// from server: 100% by king_originala
// roc 2008-06 005c2760  unit: RBX::VBodyAngularVelocity::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2760
//
// 005c2760  55                   push ebp
// 005c2761  8bec                 mov ebp, esp
// 005c2763  6aff                 push -1
// 005c2765  6820467d00           push 0x7d4620
// 005c276a  64a100000000         mov eax, dword ptr fs:[0]
// 005c2770  50                   push eax
// 005c2771  64892500000000       mov dword ptr fs:[0], esp
// 005c2778  51                   push ecx
// 005c2779  53                   push ebx
// 005c277a  56                   push esi
// 005c277b  57                   push edi
// 005c277c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c277f  8bf1                 mov esi, ecx
// 005c2781  6a14                 push 0x14
// 005c2783  c70600000000         mov dword ptr [esi], 0
// 005c2789  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2790  e88be10d00           call 0x6a0920
// 005c2795  83c404               add esp, 4
// 005c2798  85c0                 test eax, eax
// 005c279a  7419                 je 0x5c27b5
// 005c279c  b901000000           mov ecx, 1
// 005c27a1  894804               mov dword ptr [eax + 4], ecx
// 005c27a4  894808               mov dword ptr [eax + 8], ecx
// 005c27a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c27aa  c70084898300         mov dword ptr [eax], 0x838984
// 005c27b0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c27b3  eb02                 jmp 0x5c27b7
// 005c27b5  33c0                 xor eax, eax
// 005c27b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c27ba  8906                 mov dword ptr [esi], eax
// 005c27bc  5f                   pop edi
// 005c27bd  8bc6                 mov eax, esi
// 005c27bf  5e                   pop esi
// 005c27c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c27c7  5b                   pop ebx
// 005c27c8  8be5                 mov esp, ebp
// 005c27ca  5d                   pop ebp
// 005c27cb  c20800               ret 8
// 005c27ce  8b5508               mov edx, dword ptr [ebp + 8]
// 005c27d1  52                   push edx
// 005c27d2  8d4d0c               lea ecx, [ebp + 0xc]
// 005c27d5  e85636e4ff           call 0x405e30
// 005c27da  6a00                 push 0
// 005c27dc  6a00                 push 0
// 005c27de  e8a9ed0d00           call 0x6a158c

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
