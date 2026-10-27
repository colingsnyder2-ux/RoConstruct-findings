// from server: 100% by king_originala
// roc 2008-06 0048fc00  unit: RBX::VPants::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fc00
//
// 0048fc00  55                   push ebp
// 0048fc01  8bec                 mov ebp, esp
// 0048fc03  6aff                 push -1
// 0048fc05  68e0637c00           push 0x7c63e0
// 0048fc0a  64a100000000         mov eax, dword ptr fs:[0]
// 0048fc10  50                   push eax
// 0048fc11  64892500000000       mov dword ptr fs:[0], esp
// 0048fc18  51                   push ecx
// 0048fc19  53                   push ebx
// 0048fc1a  56                   push esi
// 0048fc1b  57                   push edi
// 0048fc1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048fc1f  8bf1                 mov esi, ecx
// 0048fc21  6a14                 push 0x14
// 0048fc23  c70600000000         mov dword ptr [esi], 0
// 0048fc29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048fc30  e8eb0c2100           call 0x6a0920
// 0048fc35  83c404               add esp, 4
// 0048fc38  85c0                 test eax, eax
// 0048fc3a  7419                 je 0x48fc55
// 0048fc3c  b901000000           mov ecx, 1
// 0048fc41  894804               mov dword ptr [eax + 4], ecx
// 0048fc44  894808               mov dword ptr [eax + 8], ecx
// 0048fc47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048fc4a  c700f4198200         mov dword ptr [eax], 0x8219f4
// 0048fc50  89480c               mov dword ptr [eax + 0xc], ecx
// 0048fc53  eb02                 jmp 0x48fc57
// 0048fc55  33c0                 xor eax, eax
// 0048fc57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048fc5a  8906                 mov dword ptr [esi], eax
// 0048fc5c  5f                   pop edi
// 0048fc5d  8bc6                 mov eax, esi
// 0048fc5f  5e                   pop esi
// 0048fc60  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fc67  5b                   pop ebx
// 0048fc68  8be5                 mov esp, ebp
// 0048fc6a  5d                   pop ebp
// 0048fc6b  c20800               ret 8
// 0048fc6e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048fc71  52                   push edx
// 0048fc72  8d4d0c               lea ecx, [ebp + 0xc]
// 0048fc75  e8b661f7ff           call 0x405e30
// 0048fc7a  6a00                 push 0
// 0048fc7c  6a00                 push 0
// 0048fc7e  e809192100           call 0x6a158c

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
