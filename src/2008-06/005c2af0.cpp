// from server: 100% by tester
// roc 2008-06 005c2af0  unit: RBX::VObjectValue::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2af0
//
// 005c2af0  55                   push ebp
// 005c2af1  8bec                 mov ebp, esp
// 005c2af3  6aff                 push -1
// 005c2af5  6850467d00           push 0x7d4650
// 005c2afa  64a100000000         mov eax, dword ptr fs:[0]
// 005c2b00  50                   push eax
// 005c2b01  64892500000000       mov dword ptr fs:[0], esp
// 005c2b08  51                   push ecx
// 005c2b09  53                   push ebx
// 005c2b0a  56                   push esi
// 005c2b0b  57                   push edi
// 005c2b0c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c2b0f  8bf1                 mov esi, ecx
// 005c2b11  6a14                 push 0x14
// 005c2b13  c70600000000         mov dword ptr [esi], 0
// 005c2b19  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2b20  e8fbdd0d00           call 0x6a0920
// 005c2b25  83c404               add esp, 4
// 005c2b28  85c0                 test eax, eax
// 005c2b2a  7419                 je 0x5c2b45
// 005c2b2c  b901000000           mov ecx, 1
// 005c2b31  894804               mov dword ptr [eax + 4], ecx
// 005c2b34  894808               mov dword ptr [eax + 8], ecx
// 005c2b37  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2b3a  c700608a8300         mov dword ptr [eax], 0x838a60
// 005c2b40  89480c               mov dword ptr [eax + 0xc], ecx
// 005c2b43  eb02                 jmp 0x5c2b47
// 005c2b45  33c0                 xor eax, eax
// 005c2b47  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c2b4a  8906                 mov dword ptr [esi], eax
// 005c2b4c  5f                   pop edi
// 005c2b4d  8bc6                 mov eax, esi
// 005c2b4f  5e                   pop esi
// 005c2b50  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2b57  5b                   pop ebx
// 005c2b58  8be5                 mov esp, ebp
// 005c2b5a  5d                   pop ebp
// 005c2b5b  c20800               ret 8

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
