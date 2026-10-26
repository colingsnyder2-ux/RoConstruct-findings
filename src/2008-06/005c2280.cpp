// from server: 100% by tester
// roc 2008-06 005c2280  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2280
//
// 005c2280  55                   push ebp
// 005c2281  8bec                 mov ebp, esp
// 005c2283  6aff                 push -1
// 005c2285  6800467d00           push 0x7d4600
// 005c228a  64a100000000         mov eax, dword ptr fs:[0]
// 005c2290  50                   push eax
// 005c2291  64892500000000       mov dword ptr fs:[0], esp
// 005c2298  51                   push ecx
// 005c2299  53                   push ebx
// 005c229a  56                   push esi
// 005c229b  57                   push edi
// 005c229c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c229f  8bf1                 mov esi, ecx
// 005c22a1  6a14                 push 0x14
// 005c22a3  c70600000000         mov dword ptr [esi], 0
// 005c22a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c22b0  e86be60d00           call 0x6a0920
// 005c22b5  83c404               add esp, 4
// 005c22b8  85c0                 test eax, eax
// 005c22ba  7419                 je 0x5c22d5
// 005c22bc  b901000000           mov ecx, 1
// 005c22c1  894804               mov dword ptr [eax + 4], ecx
// 005c22c4  894808               mov dword ptr [eax + 8], ecx
// 005c22c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c22ca  c7004c898300         mov dword ptr [eax], 0x83894c
// 005c22d0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c22d3  eb02                 jmp 0x5c22d7
// 005c22d5  33c0                 xor eax, eax
// 005c22d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c22da  8906                 mov dword ptr [esi], eax
// 005c22dc  5f                   pop edi
// 005c22dd  8bc6                 mov eax, esi
// 005c22df  5e                   pop esi
// 005c22e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c22e7  5b                   pop ebx
// 005c22e8  8be5                 mov esp, ebp
// 005c22ea  5d                   pop ebp
// 005c22eb  c20800               ret 8
// 005c22ee  8b5508               mov edx, dword ptr [ebp + 8]
// 005c22f1  52                   push edx
// 005c22f2  8d4d0c               lea ecx, [ebp + 0xc]
// 005c22f5  e8363be4ff           call 0x405e30
// 005c22fa  6a00                 push 0
// 005c22fc  6a00                 push 0
// 005c22fe  e889f20d00           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};

inline void Deleter::operator()(void*) const {}

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
