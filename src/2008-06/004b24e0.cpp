// from server: 100% by king_originala
// roc 2008-06 004b24e0  unit: RBX::VSnap::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b24e0
//
// 004b24e0  55                   push ebp
// 004b24e1  8bec                 mov ebp, esp
// 004b24e3  6aff                 push -1
// 004b24e5  6850877c00           push 0x7c8750
// 004b24ea  64a100000000         mov eax, dword ptr fs:[0]
// 004b24f0  50                   push eax
// 004b24f1  64892500000000       mov dword ptr fs:[0], esp
// 004b24f8  51                   push ecx
// 004b24f9  53                   push ebx
// 004b24fa  56                   push esi
// 004b24fb  57                   push edi
// 004b24fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b24ff  8bf1                 mov esi, ecx
// 004b2501  6a14                 push 0x14
// 004b2503  c70600000000         mov dword ptr [esi], 0
// 004b2509  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b2510  e80be41e00           call 0x6a0920
// 004b2515  83c404               add esp, 4
// 004b2518  85c0                 test eax, eax
// 004b251a  7419                 je 0x4b2535
// 004b251c  b901000000           mov ecx, 1
// 004b2521  894804               mov dword ptr [eax + 4], ecx
// 004b2524  894808               mov dword ptr [eax + 8], ecx
// 004b2527  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b252a  c700d84b8200         mov dword ptr [eax], 0x824bd8
// 004b2530  89480c               mov dword ptr [eax + 0xc], ecx
// 004b2533  eb02                 jmp 0x4b2537
// 004b2535  33c0                 xor eax, eax
// 004b2537  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b253a  8906                 mov dword ptr [esi], eax
// 004b253c  5f                   pop edi
// 004b253d  8bc6                 mov eax, esi
// 004b253f  5e                   pop esi
// 004b2540  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2547  5b                   pop ebx
// 004b2548  8be5                 mov esp, ebp
// 004b254a  5d                   pop ebp
// 004b254b  c20800               ret 8
// 004b254e  8b5508               mov edx, dword ptr [ebp + 8]
// 004b2551  52                   push edx
// 004b2552  8d4d0c               lea ecx, [ebp + 0xc]
// 004b2555  e8d638f5ff           call 0x405e30
// 004b255a  6a00                 push 0
// 004b255c  6a00                 push 0
// 004b255e  e829f01e00           call 0x6a158c

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
